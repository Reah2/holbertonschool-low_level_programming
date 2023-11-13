#include <unistd.h>

int _putchar(char c)
{
return write(1, &c, 1);
}
int main()
{
char myChar = 'A';
_putchar(myChar);
return 0;
}
