#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @k: the number
 *
 * Return: the last digit of the number
 */

int print_last_digit(int k)
{
	int last_digit;

	last_digit = k % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');


	return (last_digit);
}
