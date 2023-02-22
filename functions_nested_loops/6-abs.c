#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *int _abs - computes the absolute value of an integer.
 * @n: single number input
 * Return: the absolute value of n
 */
int _abs(int n)
{
if (n < 0)
n = n * -1;
return (n);
}
