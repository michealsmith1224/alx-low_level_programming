#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
  * create_file - function to create file
  * @filename: file to create
  * @text_content: text to be inputed
  * Return: 0
*/



int create_file(const char *filename, char *text_content)
{
	int fd, w;


	int len = 0;


	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd > -1 && filename)
	{
		while (text_content && text_content[len])
			len++;
		if (len > 0)
			w = write(fd, text_content, len);
		close(fd);

		if (w > -1)
			return (1);
	}

	return (-1);


}

