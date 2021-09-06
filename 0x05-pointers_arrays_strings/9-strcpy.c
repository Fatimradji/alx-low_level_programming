#include "main.h"

/**
 * _strcpy - copy from source and paste to destination
 * @dest: target destination for copy
 * @src: copy from
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != 0)
	{
		dest[len] = *(src + len);
		len++;
	}

	return (dest);
}
