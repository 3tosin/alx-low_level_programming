#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
