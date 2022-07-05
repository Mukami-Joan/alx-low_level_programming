#include "main.h"
/**
 * main - entry point
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');

	return (0);
}
