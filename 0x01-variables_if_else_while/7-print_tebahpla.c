#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char ralp;

	for (ralp = 'z' ; ralp >= 'a' ; ralp--)
	{
		putchar(ralp);
	}
	putchar('\n');
	return (0);
}
