#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from
 * input to 98
 *
 * @k: the nunber to start counting from
 */

void print_to_98(int k)
{
	if (k >= 98)
	{
		while (k > 98)
			printf("%d, ", k--);
		printf("%d\n", k);
	}
	else
	{
		while (k < 98)
			printf("%d, ", k++);
				printf("%d\n", k);
	}
}
