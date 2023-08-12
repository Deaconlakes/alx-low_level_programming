#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * err_file - functionto check if a file is open and handle errors
 * @file_from: previous file to copy from and check
 * @file_to: location where file copy to
 * @argv: argument vector
 * Return: no return
 */
void err_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - function to copy content of file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 when succes
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t n_char, nw;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_APPEND, 0664);
	err_file(file_from, file_to, argv);

	n_char = 1024;
	while (n_char == 1024)
	{
		n_char = read(file_from, buf, 1024);
		if (n_char == -1)
			err_file(-1, 0, argv);
		nw = write(file_to, buf, n_char);
			if (nw == -1)
			err_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
