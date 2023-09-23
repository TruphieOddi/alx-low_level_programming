#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read and print to output
 * @filename: file to be read
 * @letters: number of letters to read
 *
 * Return: num-number of bytes read and printed
 * 	0 = NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t ptt;
	ssize_t num;
	ssize_t pts;

	ptt = open(filename, O_RDONLY);
	if (ptt == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	pts = read(ptt, ptr, letters);
	num = write(STDOUT_FILENO, ptr, pts);

	free(ptr);
	close(ptt);
	return (num);
}
