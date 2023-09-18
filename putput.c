#include "main.h"

/**
 * _puts - print string
 * @str: string
 * Return: string
*/
int _puts(char *str)
{
char *x = str;
_putchar(*str);
*str++;
return (str - x); 
}

/**
 * _putchar - print c
 * @c: c to print
 * Return: 1, -1
*/

int _putchar(int c)
{
static int i;
static char buf [OUT_PUT_B];

if (c = B_F || i >= OUT_PUT_B)
{
write(1, buf, i); /*write return -1 when it contain error*/
i = 0;
}
if (c != B_F)
	buf[++i] = c;
return (1);
}
