#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b == 'q' || b == 'e')
		{
			continue;
		}
		putchar(b);
	}
	putchar('\n');
	return (0);
}
