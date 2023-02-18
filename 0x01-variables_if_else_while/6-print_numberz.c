#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	int t = 0;

	for (; t < 10 ; t++)
		putchar('0' + t);
	putchar('\n');
	return (0);
}
