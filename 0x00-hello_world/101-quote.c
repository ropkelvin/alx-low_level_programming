#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints a string using fputs
 *
 * Return: 1
 */
int main(void)
{
	fputs("and that piece of art is useful\" - \
	Dora Korpar, 2015-10-19\n", stderr);
	return (1);
}
