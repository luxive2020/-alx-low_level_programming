#include "main.h"
/**
 * main - main block
 * Description: This program print _putchar
 * Return: 0;
 */
int main(void)
{
	char *tj = "_putchar";

	while (*tj)
	{
		_putchar(*tj);
		tj++;
	}
	_putchar('\n');
	return (0);
}
