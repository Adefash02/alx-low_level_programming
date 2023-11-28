#include "main.h"
/**
 * append_text_to_file - to add text to an existing file
 * @filename: parameter for the name of the file to append content to
 * @text_content: PARAMETER FOR THE CONTENT TO BE APPENDED TO THE FILE
 * Return: return 1 on success and if not return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		rwr = write(fd, text_content, i);

		if (rwr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}

