#include "main.h"

/**
 * _strdup - copy string and manipulate
 * @str: buffers into allocated memory
 * Return: returns string already manipulated
 */

char *_strdup(char *str)
{
	char *sstr;
	int i = 0, len = _strlen(str);

	if (str == NULL || !str)
	{
		return (NULL);
	}

	sstr = malloc(sizeof(*str) * len);	

	for (; i < len; i++)
	{
		*(sstr + i) = *(str + i);
	}

	return (sstr);
}

/**
 * _strlen - count strings
 * @s: - buffer s
 * Return: length and count string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
	count++;
	s++;
	}
	return (count);
}
