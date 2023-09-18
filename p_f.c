#include "main.h"

/**
 * p_c - print character
 * @a: pointer 
 * @p: struct 
 * Return: byte
*/

int p_c(va_list a, op_t *p)
{
char p_c = ' ';
unsigned int d = 1, s = 0, ch = va_arg(a, int);

if (p->m)
	s += _putchar(ch);
while (d++ < p->w)
	s += _putchar(p_c);
return (s);
}

/**
 * p_p - prints percent
 * @a: pointer
 * @p: struct
 *
 * Return: byte
 */

int p_p(va_list a, op_t *p)
{
(void)a;
(void)p;
return (_putchar('%'));
}

/**
 * p_S -  specifier
 * @a:  pointer
 * @p:  struct
 *
 * Return: byte
 */

int p_S(va_list a, op_t *p)
{
char *s = va_arg(a, char *);
char *h;
int y = 0;

if ((int)(!s))
	return (_puts(NULL_STRING));
for (; *s; s++)
{
if ((*s > 0 && *s < 32) || *s >= 127)
{
y += _putchar('\\');
y += _putchar('x');
h = convert(*s, 16, 0, p); /*wait to create convert func*/
if (!h[1])
	s += _putchar('0');
y += _puts(h);
}
else 
{
y += _putchar(*s);
}
}
return (y);
}
