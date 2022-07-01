#include <stdio.h>
/**
 * main -entry point
 *
 * Return: always 0
 */
int main(void)
{
	char c;

	while (c <= 'z');
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);

}
