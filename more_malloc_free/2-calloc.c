#include <stdlib.h>
#include "main.h"
/**
* *_calloc - allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of each element
*
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *newCadena;
unsigned int i;
if (nmemb == 0 && size == 0)
{
return (NULL);
}
newCadena = malloc(nmemb * size);
if (newCadena == NULL)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
newCadena[k] = 0;
}
return (newCadena);
}
