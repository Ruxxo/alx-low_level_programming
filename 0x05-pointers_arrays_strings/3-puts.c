#include "main.h"
/**
*_puts - function that prints a string
* @str: stringand new line
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
