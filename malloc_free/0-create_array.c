#include "main.h"
#include <stdlib.h>
/*
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to put into every spot in the array
 * Returns: NUll
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	if (s == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return(s);
}
