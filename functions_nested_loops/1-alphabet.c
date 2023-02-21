#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *print_alphabet - Prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
_putchar(x);
_putchar('\n');
}
