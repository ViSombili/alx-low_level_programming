#include "main.h"
/**
 * read_textfile - that read a text and print to POSIX
 * @filename: The name of the file
 * @letters: number of characters
 * Return: write_num
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor, write_num, read_num;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1 || !file_descriptor)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	read_num = read(file_descriptor, buffer, letters);
	write_num = write(STDOUT_FILENO, buffer, read_num);
	close(file_descriptor);
	free(buffer);
	return (write_num);
}
