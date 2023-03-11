#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate a random number and determine if it
 * is positive, negative, or zero
 *
 * This function generates a random number using the
 * rand() function seeded with the current time.
 * It then checks whether the number is positive,
 * negative, or zero, and outputs the corresponding
 * string value to the console.
 *
 * Return: Always 0.
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
