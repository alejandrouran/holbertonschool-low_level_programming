#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: append string src
 * @src: append string dest
 *
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i] != '\0')
	{

		i++;
	}

	while (src[i - 1] != '\0')
	{
		i++;
	}
	return (dest);
}
