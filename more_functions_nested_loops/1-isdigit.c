#include "main.h"

/**
* _isdigit - checks for a digit (0 through 9)
*
* @c:The integer to check
*
* Return: 1 if c is a digit; Returns 0 otherwise
*
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
