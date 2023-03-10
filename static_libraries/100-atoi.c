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
int sign = 0;
int i;
int contm = 0;
for (i = 0; s[i] != '\0'; ++i)
{
if (s[i] == '-')
contm++;
if (s[i] > '9' || s[i] < '0')
continue;
res = res * 10 + s[i] - '0';
if ((s[i] >= '0' || s[i] <= '9') && (s[i + 1] == ' '))
break;
}
if (contm % 2 == 0)
sign = 1;
else
sign = -1;
return (res *sign);
}
