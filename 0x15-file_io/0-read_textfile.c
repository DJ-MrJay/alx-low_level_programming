#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read a text file and print it to STDOUT.
 * @filename: The name of the text file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed,
 * 0 on failure or NULL filename.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t total_bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	total_bytes_read = read(file_descriptor, buffer, letters);
	if (total_bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, total_bytes_read);
	if (bytes_written == -1 || bytes_written != total_bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}
