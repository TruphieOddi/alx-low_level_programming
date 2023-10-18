#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: pointer to file name to be created
 * @text_content : 1 on success, -1 on failure
 * Return: incase of failure -1.else 1.
 */
int create_file(const char *filename, char *text_content)
{
	int a, b, c = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, c);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
