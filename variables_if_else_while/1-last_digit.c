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
int n, dig;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
dig = n % 10;
if (dig > 5)
printf("%d and is greater than 5\n", dig);
else if (dig == 0)
printf("%d and is 0\n", dig);
else
printf("%d and is less than 6 and not 0\n", dig);
return (0);
}
