#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *print_last_digit - prints the last digit of a number.
 * @n: single number input
 * Return: the last digit of a number.
 */
int print_last_digit(int n)
{
int digit;
digit = n % 10;
_putchar(digit + '0');
return (digit);
}
