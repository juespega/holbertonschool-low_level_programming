#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *_isalpha - checks for alphabetic character.
 * @c: single letter input
 * Return: 1 if int c is lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}
