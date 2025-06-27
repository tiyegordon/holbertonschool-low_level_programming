#include "main.h"

/*
 * _strpbrk - locates first occurence in string s of any of bytes in str accept
 * @s: source string
 * @accept: accepted characters
 * Return: Pointer to the matching byte in s, or NUL if no match is found.
 */

char *_strpbrk(char *s, char *accept)

{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
		}
			b++;
		}

		a++;
	}

	return ('\0');
}
