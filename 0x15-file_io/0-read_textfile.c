#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t j;
	ssize_t i;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	i = read(fd, buff, letters);
	j = write(STDOUT_FILENO, buff, i);

	free(buff);
	close(fd);
	return (j);
}


