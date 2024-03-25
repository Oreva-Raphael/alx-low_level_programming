#include "main.h"

/**
 * _strncpy - Copy the string src with n bytes to the dest string
 *
 * @dest: destination string
 * @src: source string
 * @n: byte size
 *
 * Return: returning the output for it to compile properly
 */
char *_strncpy(char *dest, char *src, int n)
{
	int w = 0;

	while (w < n && src[w] != '\0')
	{
		dest[w] = src[w];
		w++;
	}
	while (w < n)
	{
		dest[w] = '\0';
		w++;
	}
	return (dest);
}
