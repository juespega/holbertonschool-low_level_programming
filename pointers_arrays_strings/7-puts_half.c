#include "main.h"
/**
 * puts_half - a function that prints half of a string,  followed by a new line
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input string
 * Return: half of input string
 */
void puts_half(char *str)
{
int i, n, tam;
tam = 0;
for (i = 0; str[i] != '\0'; i++)
tam++;
n = (tam / 2);
if ((tam % 2) == 1)
n = ((tam + 1) / 2);
for (i = n; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
