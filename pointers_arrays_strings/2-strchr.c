#include "main.h"

/**
  * _strchr - locates a character in a string.
  * @c:character being searched
  * @s:source string
  * Return: 1st occurence of character c, string s, or NULL
  */

char *_strchr(char *s, char c)

{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}

