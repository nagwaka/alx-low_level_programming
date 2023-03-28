#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src
 * @src: source
 * @dest: destination
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
