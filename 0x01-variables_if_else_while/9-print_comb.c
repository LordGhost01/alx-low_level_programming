#include <stdio.h>

/**
 * main - Prins a series of numbers with commas
 * Return: Always (Success);
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(', ');
		}
	}
	putchar('\n');
	return (0);
}
