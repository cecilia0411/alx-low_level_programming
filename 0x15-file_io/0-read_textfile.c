#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: textfile of letters it should read and print
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 * if filename is NULL return 0, if write fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t file;
	ssize_t f;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	t = read(file, text, letters);
	f = write(STDOUT_FILENO, text, t);

	free(text);
	close(file);
	return (f);
}
