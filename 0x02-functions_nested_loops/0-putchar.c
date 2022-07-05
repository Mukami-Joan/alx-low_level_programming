#include "main.h"
/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	const char str[] = "_putchar\n";
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
		_putchar(str[i]);

	return (0);
}
