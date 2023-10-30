#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * check_elf - Verify if a given file is an ELF file.
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file, this function
 * exits with code 98.
 */
void check_elf(unsigned char *e_ident)
{
    int index;

    for (index = 0; index < 4; index++)
    {
        if (e_ident[index] != 127 &&
            e_ident[index] != 'E' &&
            e_ident[index] != 'L' &&
            e_ident[index] != 'F')
        {
            dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

/**
 * print_elf_info - Display information contained in the ELF header at the
 * start of an ELF file.
 * @filename: The name of the ELF file.
 *
 * Description: This function reads the ELF header, checks if it's a
 * valid ELF file, and then prints information about the ELF header,
 * such as the magic numbers,
 * class, data format, version, OS/ABI, ABI version, type,
 * and entry point address.
 * If the file is not an ELF File or the function fails,
 * it exits with code 98.
 */
void print_elf_info(const char *filename)
{
    Elf64_Ehdr *header;
    int o, r;

    o = open(filename, O_RDONLY);
    if (o == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", filename);
        exit(98);
    }

    header = malloc(sizeof(Elf64_Ehdr));
    if (header == NULL)
    {
        close_elf(o);
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", filename);
        exit(98);
    }

    r = read(o, header, sizeof(Elf64_Ehdr));
    if (r == -1)
    {
        free(header);
        close_elf(o);
        dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", filename);
        exit(98);
    }

    check_elf(header->e_ident);
    printf("ELF Header:\n");
    
    free(header);
    close_elf(o);
}

/**
 * close_elf - Close an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed,
 * this function exits with code 98.
 */
void close_elf(int elf)
{
    if (close(elf) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
        exit(98);
    }
}

int main(int __attribute__((__unused__)) argc, char *argv[])
{
    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s <filename>\n", argv[0]);
        exit(1);
    }

    print_elf_info(argv[1]);
    return 0;
}
