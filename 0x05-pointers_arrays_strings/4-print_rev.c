#include "main.h"
/**
 * print_rev - imprime en reversa
 * @t: string
 * return: 0
 */
void print_rev(char *t)
{
	int i = 0;
	int j;

	while (*t != '\0')
	{
		i++;
		t++;
	}
	t--;
	for (j = i; j > 0; j--)
	{
		_putchar(*t);
		t--;
	}
	_putchar('\n');
}
