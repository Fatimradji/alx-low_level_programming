#include "main.h"
	
	/**
	 * create_file - creates a file
	 * @filename: is the name of the file to create
	 * @text_content: NULL terminated string to write to the file
	 *
	 * Return: 1 on success, -1 on failure.
	 */
	int create_file(const char *filename, char *text_content)
	{
		int fd;
		int t, d = 0;
	
		if (!filename)
			return (-1);
	
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (fd < 0)
			return (-1);
	
		if (text_content)
		{
			while (text_content[d])
				d++;
			t = write(fd, text_content, d);
			if (t != d)
				return (-1);
		}
	
		close(fd);
	
		return (1);
	}

