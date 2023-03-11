#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @k: the nunber to be chevked for sign
 *
 * Return: 1 if sign is positive
 * 0 if sign is zero
 * -1 if sign is negative
 */

int print_sign(int k)
{
	if (k > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (k == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
