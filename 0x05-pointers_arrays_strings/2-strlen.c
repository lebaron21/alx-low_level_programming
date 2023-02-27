#include <main.h>
/**
 *_strlen - returns the length of a string
 *@p: string
 *Return: length
 */
int _strlen(char *p);
{
	int i = 0;

	while (*p != '\0')
	{
		i++;
		p++;
	}
	return (i);
}
