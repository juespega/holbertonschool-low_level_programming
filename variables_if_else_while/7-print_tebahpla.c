#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int x;
for (x = 'z'; x >= 'a'; x--)
putchar(x);
putchar('\n');
return (0);
}
