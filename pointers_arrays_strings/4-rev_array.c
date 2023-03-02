#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: content
 * @n: is the number of elements of the array
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
int i, aux;
for (i = 0; i < n; i++)
{
n--;
aux = a[i];
a[i] = a[n];
a[n] = aux;
}
}
