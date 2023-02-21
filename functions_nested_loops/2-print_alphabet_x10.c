#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
int i;
char x;
for (i = 0; i < 10; i++)
{
for (x = 'a'; x <= 'z'; x++)
_putchar(x);
_putchar('\n');
}
}
