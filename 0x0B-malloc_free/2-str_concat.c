#include "holberton.h"

/**
 * str_concat - copy string and manipulate
 * @s1: buffers into allocated memory
 * @s2: buffers into allocated memory
 * Return: returns string already manipulated
 */

char *str_concat(char *s1, char *s2)
{
	char *sstr;
	unsigned int len = _strlen(s1);
	unsigned int l_cnt = _strlen(s2);
	unsigned int t_ln_cnt = len + l_cnt;

	if (s1 == NULL || s2 == NULL || !s1 || !s2)
	{
		return (NULL);
	}

	sstr = malloc(sizeof(char) * t_ln_cnt);

	unsigned int i = 0, w2 = 0;

	for (; i < t_ln_cnt; i++)
	{
		*(sstr + i) = *(s1 + i);

		if (i >= len)
		{
			*(sstr + i) = *(s2 + w2);
			w2++;
		}
	}

	return (sstr);
}

/**
 * _strlen - counts length of a sting or char pointer
 * @s: accept user input
 * Return: always return legnth counted
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
