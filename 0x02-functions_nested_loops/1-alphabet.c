#include "main.h"

/**
 * print_alphabet - prints the english alphabets in lowercase
 *
 * Return; 0
 */

void print_alphabet(void)
{
	char c = 'a'
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c + i);
	}
	_putchar(10);
}
