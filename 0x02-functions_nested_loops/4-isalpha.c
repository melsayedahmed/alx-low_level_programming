#include "main.h"

/**
 * _isalpha - checks if the character is alpha
 * @c: letter to be checked
 *
 * Return: 1 if its alphabet ,else 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
