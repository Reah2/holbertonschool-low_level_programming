#include <unistd.h>

/**
<<<<<<< HEAD
 * _putchar - Writes a character to the standard output (usually the terminal).
 * @c: The character to be written.
 *
 * Return: On success, returns the character written as an unsigned char cast to
 *
 * an integer. On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return write(1, &c, 1);

=======
 * _putchar - writes a character to the standard output
 * @c: The character to print
 * Return: On success, the number of characters written is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c) 
{
	return write(1, &c, 1);

>>>>>>> 3358af1282515ba9c8ab317e71f29d859358273e
}
