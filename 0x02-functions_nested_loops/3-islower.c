#include "main.h"
/**
 * _islower - checks fot lowercase character
 * @c: the character to be checked
 * Return: 1 0r 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
