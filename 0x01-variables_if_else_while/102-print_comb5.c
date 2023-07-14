#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i;
	int j;
	int k;
	int m;

for (i = 0 ; i < 10 ; i++)
{	
	for (j = 0 ; j <= 10 ; j++)
	{
		for (k = 0 ; k < 10 ; k++)
		{
			for (m = 0 ; m < 10 ; m++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(32);
				putchar('0' + k);
				putchar('0' + m);
				if (!(i == 9 && j == 8))
				{
					putchar(',');
					putchar(32);
				}
				m++;
			}
		}
	}
}
	putchar('\n');
	return (0);
}
