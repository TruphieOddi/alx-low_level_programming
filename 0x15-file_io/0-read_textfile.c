#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdio
 * @filename: *file
 * @letters: ammo of chars read
 *
 * Return: letters, 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t c, d, e;

	c = open(filename, O_RDONLY);

	if (c == -1)
	{
		return (0);
	}

	b = malloc(sizeof(char) * letters);
	d = read(c, b, letters);
	e = write(STDOUT_FILENO, b, d);

	free(b);
	close(c);

	return (e);
}
