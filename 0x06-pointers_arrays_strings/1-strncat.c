#include "main.h"

/**
* _strncat - Concatenates two strings using at most
*            an inputted number of bytes from src.
*@dest: String to be appended upon
*@src: String to be appended to dest
*@n: No. of bytes from src to be appended to dest
*
*Return: A pointer to resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (dest[i++])
		length++;

	for (i = 0; src[i] && i < n; i++)
		dest[length++] = src[i];

	return (dest);
}
