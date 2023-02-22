#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _abs - a function that computes the absolute value of an integer
 * @n: integer number input
 * Return: absolute value of n
 */
int _abs(int n)
{
if (n < 0)
n = n * -1;
return (n);
}
