#include "main.h"


/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @src: source memory area
 * @dest: memory area destination
 * @n: number of bytes to copy
 * Return: memory area replaced, dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
{
	dest[a] = src[a];
}

	return (dest);

}
