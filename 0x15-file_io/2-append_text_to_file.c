#include "main.h"

/**
 * append_text_to_file - a function that appends text at the E0F
 * @filename: name of said file
 * @text_content: is the Null terminated string to be added
 *
 * Return: 1 on success and -1 if error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int g;
	ssize_t h;

	if (filename == NULL)
		return (-1);

	g = open(filename, O_WRONLY | O_APPEND);

	if (g == -1)
		return (-1);

	if (text_content != NULL)
	{
		h = write(g, text_content, strlen(text_content));

		if (h == -1)
		{
			close(g);
			return (-1);
		}
	}

	close(g);
	return (1);
}
