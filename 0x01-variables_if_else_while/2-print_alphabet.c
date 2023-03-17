#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * Descriptioin: Generate small alphabet in lower case
 * Return: 0
 */
int main(void)
{

	int i = 0;

	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'w', 'x', 'y', 'z'};

	while (i < 26)
	{
		putchar(alpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
