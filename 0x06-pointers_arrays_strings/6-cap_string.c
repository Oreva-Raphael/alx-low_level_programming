#include "main.h"

/**
* cap_string - printing the capital letters of commands
* @s: the string we're using
* Return: returning the s
*/
char *cap_string(char *s)
{
	int a = 0;

if (s[a] >= 'a' && s[a] <= 'z')
{
s[a] = s[a] - 32;
}

while (s[a] != '\0')
{
if (s[a] == ' ' || s[a] == '\t' || s[a] == '\n' ||
s[a] == ',' || s[a] == ';' || s[a] == '.' ||
s[a] == '!' || s[a] == '?' || s[a] == '"' ||
s[a] == '(' || s[a] == ')' || s[a] == '{' ||
s[a] == '}')
{
a++;
if (s[a] >= 'a' && s[a] <= 'z')
{
s[a] = s[a] - 32;
}
}
else
{
a++;
}
}

return (s);
}
