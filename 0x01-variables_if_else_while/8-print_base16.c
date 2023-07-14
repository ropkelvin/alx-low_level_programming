#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n16;

	for (n16 = 0 ; n16 < 16 ; n16++)
	{
		if (n16 < 10)
		{
			putchar('0' + n16);
		}
		else
		{
			putchar(87 + n16);
		}
	}
	putchar('\n');
	return (0);
}
