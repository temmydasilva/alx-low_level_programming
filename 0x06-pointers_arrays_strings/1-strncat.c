#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: string destination
 * @src: string source
 * @n: number of bytes to concatenate
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)

{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\n';
	return (dest);
}
