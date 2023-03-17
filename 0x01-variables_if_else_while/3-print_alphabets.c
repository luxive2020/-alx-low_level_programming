#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Generate lower case alphabet
 * and generate upper case alphabet
 * Return: 0;
 */
int main(void)
{
	int i = 0;
	int j = 0;
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
	'z'};
	char ALPHA[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
	'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
	'Z'};
	while (i < 26)
	{
	putchar(alpha[i]);
	i++;
	}
	while (j < 26)
	{
	putchar(ALPHA[j]);
	j++;
	}
	putchar('\n');
	return (0);
}
