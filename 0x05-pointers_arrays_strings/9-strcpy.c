#include "main.h"
#include <stdlib.h>

/**
 * _strcpy - copy from source and paste to destination
 * @dest: target destination for copy
 * @src: copy from
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, len1 = 0, cnt1 = 0, cnt = 0;
	char *ss;

	while (src[len] != '\0')
		len++;
	while (dest[len1] != '\0')
		len1++;
	
	ss = malloc(sizeof(char) * (len + len1));

	while (dest)
	{
		ss[cnt] = dest[cnt];
		if (cnt >= len1)
		{
			ss[cnt] = src[cnt1];
			cnt1++;
		}
		cnt++;
		if (cnt1 == len)
			break;
	}
	cnt = 0;
	while (ss[cnt] != '\0')
	{
		dest[cnt] = ss[cnt];
		cnt++;
	}
	return (dest);
}

