#include "main.h"
/**
 * _atoi - a function that convert a string to an integer.
 * @s: string a validate
 *
 * Return: an integer
 */
int _atoi(char *s)
{
unsigned int res = 0;
int sign = 1;
int i;
for (i = 0; s[i] != '\0'; ++i)
{
if (s[i] == '-' && s[i + 1] >= '0' && s[i + 1] <= '9')
sign = -1;
if (s[i] > '9' || s[i] < '0')
continue;
res = res * 10 + s[i] - '0';
}
res *= sign;
return (res);
}
