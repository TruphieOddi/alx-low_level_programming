#include "main.h"

/**
 * _isalpha - check if all characters are alphabets
 * @c: character to be checked
 *
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	return ((c <= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
