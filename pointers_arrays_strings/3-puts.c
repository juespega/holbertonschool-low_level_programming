#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line.
 * @str: string input type pointer.
 * Return: a string
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
