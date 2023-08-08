#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that Read text file print to STDOUT.
 * @filename: text file being read
 * @content: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t content)
{
	char *p;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	p = malloc(sizeof(char) * content);
	t = read(fd, p, content);
	w = write(STDOUT_FILENO, p, t);

	free(p);
	close(fd);
	return (w);
}

