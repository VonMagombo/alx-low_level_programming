#include "main.h"
/**
 * create_file - creates a file and adds permission to it
 * @filename: the file to be created
 * @text_content: content to be put in the created file
 * Return: 1 if successfull or -1 on error.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fhand = 0, check = 0, x = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fhand = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fhand < 0)
		return (-1);

	while (text_content[x])
		x++;
	check = write(fhand, text_content, x);
	if (check < 0)
		return (-1);

	close(fhand);
	return (1);
}
