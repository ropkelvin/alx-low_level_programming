#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char alph = 'a';
	char ALPH = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}

	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		ALPH++;
	}

	putchar('\n');
	return (0);
}
