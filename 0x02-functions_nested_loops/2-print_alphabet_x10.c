#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets in
 * a row 10 times.
 *
 * Return: 0.
 */

void print_alphabet_x10(void)
{
	int count = 1;
	char alpha;

	while (count++ <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);

		_putchar('\n');
	}
}
