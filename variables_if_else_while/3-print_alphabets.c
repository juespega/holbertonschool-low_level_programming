#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
char x, y;
for (x = 'a'; x <= 'z'; x++)
putchar(x);
for (y = 'A'; y <= 'Z'; y++)
putchar(y);
putchar('\n');
return (0);
}
