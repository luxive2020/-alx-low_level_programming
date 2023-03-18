#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: a program that prints all possible
 *  combinations of single-digit numbers.
 *  Return: 0;
 */
int main(void)
{	int a;

	for (a = 0; a < 10; a++)
	{
		if (a < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);

}
