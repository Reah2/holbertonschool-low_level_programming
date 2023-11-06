#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: count
 *
 * @argv: argument string
 *
 * Return: int count of arguments
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);

	return (argc - 1);

}
