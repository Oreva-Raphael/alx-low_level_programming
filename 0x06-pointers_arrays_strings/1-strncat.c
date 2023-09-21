#include "main.h"

/**
 * _strncat - This function concatenates string with n type of bytes
 * @dest: The first string
 * @src: The second string
 * @n: the integer that specifies the number of bytes
 * Return: returning an output
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
