#include "main.h"

/**
 * p_f_t - prints char addresses
 * @start: address
 * @stop:  address
 * @except: except address
 *
 * Return: byte
 */

int p_f_t(char *s, char *p, char *e)
{
int sum = 0;

	while (s <= p)
	{
		if (s != e)
			sum += _putchar(*s);
		s++;
	}
	return (sum);
}

/**
 * p_R - print reverse from 13 digit
 * @a: string
 * @p: struct 
 * Return: byte
*/

int p_R(va_list a, op_t *p)
{
int i, x, y = 0;
char ad[] = "NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";

char *b = va_arg(a, char *);
(void)p;

i = 0;
x = 0;
while (b[i])
{
if ((b[i] >= 'A' && b[i] <= 'Z')
	|| (b[i] >= 'a' && b[i] <= 'z'))
{
x = b[i] - 65;
y += _putchar(b[x]);
}
else
y += _putchar(b[i]);
i++;
}
return (y);
}
