#include "main.h"
	
	/**
	 * read_textfile -  reads a text file and prints it to the POSIX stdout
	 * @letters: is the number of letters to be read and print
	 * @filename: name of the file to be read
	 *
	 * Return: actual number of letters it could read and print
	 */
	ssize_t read_textfile(const char *filename, size_t letters)
	{
		int fad;
		int a, t;
		char *buf;
	
		if (!filename)
			return (0);
	
		fad = open(filename, O_RDONLY);
		if (fd < 0)
			return (0);
	
		buf = malloc(sizeof(char) * letters);
		if (!buf)
			return (0);
	
		s = read(fad, buf, letters);
		if (a < 0)
		{
			free(buf);
			return (0);
		}
		buf[a] = '\0';
	
		close(fad);
	
		t = write(STDOUT_FILENO, buf, a);
		if (t < 0)
		{
			free(buf);
			return (0);
		}
		free(buf);
		return (t);
	}

