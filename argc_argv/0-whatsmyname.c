#include "stdio.h"

/**
 * main - entry point
 *
 * @argc: size of argv
 *
 * @argv: name of app + any other arguments.
 *
 * Return: always 0
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[0]);

	return (0);

}
