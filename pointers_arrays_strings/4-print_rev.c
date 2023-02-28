#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse.
 * counter is to first count to end, backcounter is to count back
 * @s: str input pointer
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int counter = 0;
	int i, backcounter;
for (i = 0; s[i] != '\0'; i++)
{
counter++;
}
for (backcounter = (counter - 1); backcounter >= 0; backcounter--)
{
_putchar(s[backcounter]);
}
_putchar('\n');
}
