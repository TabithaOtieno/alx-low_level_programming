#include "main.h"

/**
*_strlen - check the length of a string
*@s: string to be checked
*Return: length of the string
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
