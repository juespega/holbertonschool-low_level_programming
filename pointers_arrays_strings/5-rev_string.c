#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *s)
{
char aux = s[0];
int tam = 0;
int i;
while (s[tam] != '\0')
tam++;
for (i = 0; i < tam; i++)
{
tam--;
aux = s[i];
s[i] = s[tam];
s[tam] = aux;
}
}
