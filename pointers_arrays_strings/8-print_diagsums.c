#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - a function that prints the sum of the diag of a matrix
 * @a: input punter
 * @size: input size
 * Return: sum of the diagonals
 */
void print_diagsums(int *a, int size)
{
int i, n;
int dial1 = 0;
int dial2 = 0;
for (i = 0; i <= (size * size); i = i + size + 1)
dial1 = dial1 + a[i];
for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
dial2 = dial2 + a[n];
printf("%d, %d\n", dial1, dial2);
}
