#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Generate all lower case alphabet except
 * q and e
 * Return: 0;
 */
int main(void)
{
	int i = 0;
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'w', 'x', 'y', 'z'};
	while (i < 26)
	{
		if (alpha[i] != 'e' && alpha[i] != 'q')
		{
		putchar(alpha[i]);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
