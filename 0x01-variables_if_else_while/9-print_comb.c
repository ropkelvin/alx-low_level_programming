#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int nums;

	for (nums = 0 ; nums < 10 ; nums++)
	{
		putchar(nums + '0');
		if (nums < 9)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
