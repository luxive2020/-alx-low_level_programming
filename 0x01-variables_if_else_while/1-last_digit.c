#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Generate a random number
 * and check it last digit
 * if it is greater than 5
 * if it is equal to 0
 * if it is less than 6 and not 0
 * Return: 0
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	} else if (x == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	} else if (x <= 6 && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}
