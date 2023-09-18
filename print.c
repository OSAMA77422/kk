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
op_t par = OP_INIT; /*struct a in main.h*/

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
i_p(&par, a); /*func which initiate struct in params.c file*/
if (*q != '%')
{
b += _putchar(*q); /*_putchar in putput.c file*/
continue;
}
x = q;
q++;
while (g_d(q, &par)) /*flag func in specifier.c file*/
{
q++;
}
p = g_w(q, &p, a); /*width func in specifier.c file*/
q = g_p(q, &par, a); /*persicion func in s_f.c file*/
if (g_m(q, &par)) /*modifier func for 'l', 'h' in specifier file*/
	q++;
if (!g_f(q)) /*get specifier func for struct b(array of struct) in specifier.c file*/
	b += p_f_t(x, q, par.l_m || par.h_m ? q - 1 : 0); /*print from to func in h.c file*/
else
	b += g_p_f(q, a, &par); /*func to return pointer to which type will print 
	in specifier.c */
}
_putchar(B_F); /*buffer flash in main.h*/
va_end(a);
return (b);
}
