#include <stdio.h>
#include <unistd.h>
/**
 * main - main block
 * Description:a C program that prints exactly and that piece
 * of art is useful\" - Dora Korpar, 2015-10-19, followed
 * by a new line, to the standard error.
 * Return: 1;
 */
int main(void)
{
	write(2,
	       "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	       58);
	return (1);
}
