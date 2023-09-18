#include "main.h"

/**
 * _printf - print func
 * @format: string
 * Return: byte
*/

int _printf(const char *format, ...)
{
int b = 0; /*return*/
va_list a;
char *q, *x;
op_t par = OP_INIT;

va_start(a, format);

if (!format || (format[0] == '%' && !format[1]))
		{
		return (-1);
		}
if (format[0] == '%' && format[1] == ' ' && !format[2])
		{
		return (-1);
		}
for (q = (char *)format; *q; q++)
{
i_p(&par, a);
if (*q != '%')
{
b += _putchar(*q);
continue;
}
x = q;
q++;
while (g_d(q, &par))
{
q++;
}
q = g_p(q, &par, a);
if (g_m(q, &par))
	q++;
if (!g_f(q))
	b += p_f_t(x, q, par.l_m || par.h_m ? q - 1 : 0);
else
	b += g_p_f(q, a, &par);
}
_putchar(B_F);
va_end(a);
return (b);
}
