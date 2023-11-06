#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: counts
 *
 * @argv: string array for the argument
 *
 * Return: always 0 else 1
 *
 */

int main(int argc, char *argv[])

{

	int i, sum = 1;

	/*one for app name and two for int values */

	if (argc != 3)

	{

		printf("Error\n");

		return (1);

	}

	for (i = 1; i < argc; i++)

		sum *= atoi(argv[i]);

	printf("%d\n", sum);

	return (0);

}
