#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocating 1024 byte.
 * @file: file buffeers
 * Return: new allocated buffered pointer.
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}
/**
 * close_file - Closes decripted file
 * @fd: said file descriptor.
 */
void close_file(int fd)
{
	int j;

	j = close(fd);

	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - cp content
 * @argc: args_
 * @argv: *array
 * Return: 0
 * if args count is not right, exit 97.
 * if file_from not found, exit 98.
 * if file_to can't be created or not ryt, exit 99.
 * If file_to or from can't be closed, exit 100.
 */
int main(int argc, char *argv[])
{
	int k, j, l, m;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	k = open(argv[1], O_RDONLY);
	l = read(k, buf, 1024);
	j = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (k == -1 || l == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		m = write(j, buf, l);
		if (j == -1 || m == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		l = read(k, buf, 1024);
		j = open(argv[2], O_WRONLY | O_APPEND);

	} while (l > 0);

	free(buf);
	close_file(k);
	close_file(j);

	return (0);
}
