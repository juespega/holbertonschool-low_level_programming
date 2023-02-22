#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *print_sign - checks for alphabetic character.
 * @n: single number input
 * Return: 1 and print + if int n is greater than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
