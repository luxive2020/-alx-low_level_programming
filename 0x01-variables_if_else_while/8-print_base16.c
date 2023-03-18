#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description:  a program that prints all the numbers of
 *  base 16 in lowercase, followed by a new line.
 *  Return: 0;
 */
int main(void)
{
	char base_16[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a',
		'b', 'c',  'd', 'e', 'f'};
	int i = 0;

	while (i < 16)
	{
		putchar(base_16[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
