#include <stdio.h>

/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ii = 48;
	int jj = 49;
	int cm = 44;
	int spc = 32;

	while ((ii <= 56) && (jj <= 57))
	{
		putchar(ii);
		putchar(jj);
		putchar(cm);
		putchar(spc);
		jj++;

		if (jj == 58)
		{
			ii++;
			jj = ii + 1;
		}
		if ((ii == 56) && (jj == 57))
		{
			cm = 10;
			spc = 0;
		}
	}
	return (0);
}
