#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: The main function generates a random 
 * number and
 * computes the last digit to output the corresponding 
 * string.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int lastdigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastdigit = n % 10;

	if (lastdigit > 5)
	{
	printf("Last digit of %d is %d and is greater 
			than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, 
			lastdigit);
	}
	else
	{
	printf("Last digit of %d is %d and is less 
			than 6 and not 0\n", n, 
			lastdigit);
	}
	return (0);
	}
