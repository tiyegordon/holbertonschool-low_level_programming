#include "main.h"

/**
* _isupper - checks for uppercase character
*
* @c: The character to check (ASCII code)
*
* Returns: 1 if c is uppercase; Returns 0 otherwise/
*
*/

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
