#include "main.h"
/**
 * _isalpha - Function that checks for alphabetic character
 * @c: Character in ASCII code
 * Return: 1 if it is an alphabet, 0 for others
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') ||  (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
