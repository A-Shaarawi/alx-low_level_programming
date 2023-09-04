#include "main.h"

/**
 * read_textfile - function
 * @filename: para
 * @letters: para
 * Return: number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r;
	ssize_t w;
	char *buf;

	fd = open(filename, O_RDONLY)
	if (filename == NULL || fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	close(fd);
	return (w);

}
