#include <stdio.h>

/**
 * main - printsthe alphabet in a lowercase
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'e')
			putchar(la);
	}
	putchar('\n');

	return (0);
}
