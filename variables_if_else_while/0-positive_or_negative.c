#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 *main - Entry point
 *Description: This is the main function of the program.
 *It generates a random number, checks if it's positive, zero, or negative,
 *and prints the corresponding message
 *Return: 0 (Success)
 *
 */

int main(void)

{

int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d positive\n", n);
else if (n == 0)
printf("%d zero\n", n);
else
printf("%d negative\n", n);
return (0);
}
