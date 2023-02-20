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
printf("Last digit of %d is %d and is less than 5\n", n, dig);
else if (dig == 0)
printf("if the last digit of %d is %d: the string and is 0",n, dig);
else
printf("if the last digit of %d is less than 6 and not 0: the string and is less than 6 and not 0", n);
return (0);
}
