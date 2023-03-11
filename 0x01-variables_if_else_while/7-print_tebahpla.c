#include <stdio.h>

/**
 * main - Entry point
 *
 * print the alphabet in reverse order lowercase
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
