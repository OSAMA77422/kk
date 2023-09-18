#include "main.h"

/**
 * g_f - select the format 
 * @s: format
 * Return: byte
*/

int (*g_f(char *s))(va_list a, op_t *p)
{
s_t sp[] = {{"c", p_c}, {"s", p_s}, {"%", p_p}, {"b", p_b},
	{"S", p_S}, {"p", p_a}, {"R", p_R}, {NULL, NULL}};
int i = 0;

while (sp[i].specifier)
{
if (*s == sp[i].specifier[0])
{
return (sp[i].f);
}
i++;
}
}

/**
 * g_p_f - format func
 * @s: string format
 * @a: a pointer
 * @p: struct para
 * Return: byte
*/

int g_p_f(char *s, va_list a, op_t *p)
{
int (*f)(va_list a, op_t *) = g_f(s);

if (f != NULL)
	return (f(a, p));
return (0);
}

/**
 * g_d - flag
 * @s: string
 * @p: struct
 * Return: exist flag
*/
int g_d(char *s, op_t *p)
{
int i = 0;

switch (*s)
{
	case '-':
		i = p->m = 1;
		break;
}
return (i);
}

/**
 * g_m - modifier
 * @s: string
 * @p: struct
 * Return: exist modifier
*/

int g_m(char *s, op_t *p)
{
int i = 0;
switch (*s)
{
	case 'h':
		i = p->h_m = 1;
		break;
	case 'l':
		i = p->l_m = 1;
		break;
}
return (i);
}

/**
 * g_w - width func
 * @s: string
 * @p: struct
 * @a: pointer
*/

char *g_w(char *s, op_t *p, va_list a)
{
int i = 0;

if (*s == '*')
{
i = va_arg(a, int);
s++;
}
else 
{
while (_i_d(*s))
	i = i * 10 + (*s++ - '0');
}
p->w = i;
return (s);
}
