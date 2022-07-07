#include "main.h"
/**
 * print_numbers - printing numbers
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		_putchar((c % 10) + '0');

	_putchar('\n');

	return (0);
}
