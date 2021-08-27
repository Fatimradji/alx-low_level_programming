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
	int kk = 50;
	int cm = 44;
	int spc = 32;

	while ((ii <= 55) && (jj <= 56) && (kk <= 57))
	{
		putchar(ii);
		putchar(jj);
		putchar(kk);
		putchar(cm);
		putchar(spc);
		kk++;

		if (kk == 58)
		{
			jj++;
			kk = jj + 1;
		}
		if (jj == 57)
		{
			ii++;
			jj = ii + 1;
			kk = jj + 1;
		}
		if ((ii == 55) && (jj == 56) && (kk == 57))
		{
			cm = 10;
			spc = 0;
		}
	}
	return (0);
}
