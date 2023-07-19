#include "main.h"

/*
 * print_alphabet - prints alphabet in lowercase
 *
 */

void print_alphabet()
{
	char letters;
	
	for (letters='a';letters<='z';letters++)
		_putchar(letters);
	_putchar('\n');
}
