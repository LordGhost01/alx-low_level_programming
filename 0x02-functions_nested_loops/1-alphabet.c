#include "main.h"

/**
 * print_alphabet - prints the english alphabets in lowercase
 *
 * Return; void.
 */

void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabet[i]);
	}

	_putchar('\n');
}
