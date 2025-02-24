#include <stdio.h>

/**
 * main - entry point
 * Description: Print all the letters except q and e
 *
 * Return: 0
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
