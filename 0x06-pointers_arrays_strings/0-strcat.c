#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: pointer to the string to be concatenated
* @src: source string to be appended to @dest
*
* Return: A pointer to the destination string @dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, length = 0;

	while (dest[i++])
		length++;

	for (i = 0; src[i]; i++)
		dest[length++] = src[i];

	return (dest);
}
