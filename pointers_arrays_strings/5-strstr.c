#include "main.h"

/*
 * _strstr - finds first occurence of substring needle in string haystack
 * @haystack: main/search string
 * @needle: substring being searched
 * 
 * Return: char value
 */

char *_strstr(char *haystack, char *needle)

{
	int a = 0, b = 0;
	
	while (haystack [a])
	
	{ while (needle [b])
		{
			if (haystack [a + b] != needle [b])
			{
				break;
			}
			b++;
		}
		
		if (needle [b] == '\0')
		
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
