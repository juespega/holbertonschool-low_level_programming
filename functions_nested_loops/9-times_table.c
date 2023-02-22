#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * row, column, result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
int row, colum, result;
for (row = 0; row <= 9; row++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (colum = 1; colum <= 9; colum++)
{
result = (row * colum);
if ((result / 10) > 0)
{
_putchar((result / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((result % 10) + '0');
if (colum < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
