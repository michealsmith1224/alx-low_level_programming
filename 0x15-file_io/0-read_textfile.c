#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


/**
  * read_textfile - read file
  * @filename: name of file
  * @letters: length of string
  * Return: 0
*/



ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, b;

	fd = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);
	if (fd == -1)
		return (0);

	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		b = read(fd, buf, letters);
		write(STDOUT_FILENO, buf, b);
	}

	return (b);
}
