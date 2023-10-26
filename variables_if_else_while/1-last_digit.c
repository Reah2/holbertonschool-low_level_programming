#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point
 *Return: Always 0 (Success)
 *
 */

int main(void)

{

int n;
srand(time(0));
n = rand();

printf("Last digit of %d is ", n % 10);

if (n % 10 > 5)
{
printf("%d and is greater than 5\n", n);
}
else if (n % 10 == 0)
{
printf("0 and is 0\n");
}
else
{
printf("%d and is less than 6 and not 0\n", n);
}
return (0);
}
