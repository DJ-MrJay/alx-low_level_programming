#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Read a text file and print it to STDOUT.
 * @filename: The name of the text file to be read.
 * @letters: The number of letters to be read.
 * Return: The actual number of bytes read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_read, bytes_written, total_written = 0;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

while ((bytes_read = read(fd, buffer, letters)) > 0)
{
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1)
{
free(buffer);
close(fd);
return (0);
}
total_written += bytes_written;
}

free(buffer);
close(fd);

return (total_written);
}
