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
	int fd, b, w;

	buf = NULL;
	fd = open(filename, O_RDONLY);
	if (filename && fd > -1)
	{
		buf = malloc(sizeof(char) * (letters + 1));

		if (buf)
		{
			b = read(fd, buf, letters);
			buf[b] = '\0';
			if (b > -1)
			{
				w = write(STDOUT_FILENO, buf, b);
			}

			free(buf);
			close(fd);
			if (w > -1)
				return (b);
		}
	}
	return (0);
}
