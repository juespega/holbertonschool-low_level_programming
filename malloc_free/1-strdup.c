#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a point to a newly allocated space in mem.
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
int i;
int final;
char *array;
if (str == NULL)
return (NULL);
for (final = 0; final <= *str; final++)
{
}
final += 1;
array = malloc(sizeof(char) * final);
for (i = 0; i < final; i++)
array[i] = str[i];
if (array == NULL)
return (NULL);
return (array);
}
