#include "main.h"
/**
 * print_square -  a function that prints a square.
 * @size: input is the size of the square
 * Returns: a square
 */
void print_square(int size)
{
int colums, rows;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (colums = 0; colums <= size; colums++)
{
_putchar('#');
for (rows = 1; rows <= size; rows++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
