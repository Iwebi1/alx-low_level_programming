#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	/* Print lowercase alphabet in reverse */
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	/* Print a new line */
	putchar('\n');

	return (0);
}
