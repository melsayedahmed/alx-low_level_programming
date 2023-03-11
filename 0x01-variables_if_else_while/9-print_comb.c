#include <stdio.h>

/**
 * main -Entry point
 *
 * prints all possible combination of single numbers
 * Return: Always 0.
 */

int main(void)
{
	int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
	}
	}
	return (0);
}
