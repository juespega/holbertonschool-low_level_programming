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
char x;
for (x = 'a'; x <= 'z'; x++)
if (x != 'e' && x != 'q')
putchar(x);
putchar('\n');
return (0);
}
