#include "main.h"
/**
 * create_file - fucntion
 * @filename: para
 * @text_content: Para
 * Return: number
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, i = 0;

	if (filename == NULL)
		return (0);
	while (text_content[i])
		i++;
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	w = write(fd, text_content, i);
	if (fd == -1 || w == -1)
		return (0);
	close(fd);
	return (1);
}
