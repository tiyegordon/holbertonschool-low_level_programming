#include "main.h"
#include <unistd.h>

int main(void)
{
char str[] = "_putchar\n";
int i;

for (i = 0; str[i] != '\0'; i++)
	_putchar (str[i]);

return (0);
}
