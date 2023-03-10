#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry Point
 * atoi - converts a string to an integer
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: the int converted from the string
 */
int main(int argc, char *argv[])
{
int i, res = 1;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
else
{
for (i = 1; i < argc; i++)
{
res *= atoi(argv[i]);
}
printf("%d\n", res);
}
return (0);
}
