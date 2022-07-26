#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: file name
 * @text_content: appended content to a file
 *
 * Return: 1 if success. -1 if fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		nletters = 0;
		while (text_content[nletters])
		{
			nletters++;
		}
		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
		{
			return (-1);
		}
	}
	close(fd);

	return (1);
}
