#include <stdio.h>

/**
 * main - entry point
 * Description: print 0-9
 *
 *Return: 0
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
