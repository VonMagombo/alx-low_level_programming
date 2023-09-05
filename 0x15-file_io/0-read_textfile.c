#include "main.h"
/**
 * read_textfile - Reads a textfile and prints the contents to the POSIX STDOUT
 * @filename: the file to read from
 * @letters: number of characters to be printed to the STDOUT
 * Return: the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fhand = 0, chars = 0;
	char *buf;

	if (!filename || !letters)
		return (0);

	fhand = open(filename, O_RDONLY);
	if (fhand < 0)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	chars = read(fhand, buf, letters);
	chars = write(STDOUT_FILENO, buf, chars);
	if (chars < 0)
		return (0);

	close(fhand);
	free(buf);
	return (chars);
}
