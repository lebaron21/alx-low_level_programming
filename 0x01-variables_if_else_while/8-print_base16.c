#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always return 0
 *
 *
 */
int main(void)
{
	int a;
	char b;
	
	for (a = 0; a < 10; a++)
		putchar(a);
	putchar('\n');

	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}	
