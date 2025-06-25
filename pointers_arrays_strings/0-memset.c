#include "main.h"


/**
 * _memset - fills the first n bytes of the memory area pointed to by
 * s with the constant byte b.
 * @s: pointer to the starting memory address to fill
 * @b: constant byte to fill the memory with
 * @n: number of bytes to fill
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
