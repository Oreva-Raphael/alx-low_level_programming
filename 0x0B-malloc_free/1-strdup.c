#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* _strdup - duplicates string
* Description: cpoies string into another initialized memory
* @str: string to be copied
*
* Return: pointer to duplicate string or null if unsuccessful
*/

char *_strdup(char *str)
{
	char *newstr;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	newstr = (char *)(malloc((len + 1) * sizeof(char)));
	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		newstr[i] = str[i];
	}
	newstr[len] = '\0';
	return (newstr);
}
