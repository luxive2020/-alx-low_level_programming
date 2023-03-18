#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: 0;
 */
int main(void)
{
	int i = 25;
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z'};

	while (i >= 0)
	{
		putchar(alpha[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
