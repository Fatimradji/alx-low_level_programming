#include "main.h"

void print_square(int size)
{
	int i = 1, j = 1, k = 1;

	if (size <= 0)
		_putchar(10);
	for (; i <= (size * size); i++, k++)
	{
		if (i < size)
			_putchar(35);
		if (i >= size && j <= i)
		{
			_putchar(35);
			j++;
		}
		if (k == size)
		{
			k = 0;
			_putchar(10);
		}
	}
}
