#include "main.h"
/**
 * print_diagonal - a a function that draws a straight line in the terminal.
 * @n: input number of times to print '/'
 * Returns: a diagonal line
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (j = 1; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
