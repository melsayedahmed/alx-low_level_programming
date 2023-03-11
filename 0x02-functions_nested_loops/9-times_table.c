#include "main.h"

/**
 * times_table - prints time table for no. 9
 */

void times_table(void)
{
	int num;
	int multiply;
	int product;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');


		for (multiply = 1; multiply <= 9; multiply++)
		{
		_putchar(',');
		_putchar(' ');

		product = num * multiply;

		if (product <= 9)
			_putchar(' ');
		else
			_putchar('0' + (product / 10));
		_putchar('0' + (product % 10));
		}

		_putchar('\n');
	}
}
