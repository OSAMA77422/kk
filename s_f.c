#include "main.h"

/**
 * _i_d - check for digit
 * @c: vds
 * Return: 1, -1
*/
int _i_d(int c)
{
if (c >= '0' && c <= '9')
	return (1);
return (-1);
}

/**
 * _strlen
 * @s: string to get lengh
 * Return: lengh of string
*/

int _strlen(char *s)
{
int i, c = 0;

for (i = 0; s[i] != '\0'; i++)
{
c++;
}
return (c);
}
/**
 * *g_p - persicion for string
 * @s: string
 * @p: struct
 * @a: pointer
 * Return: pointer
*/

char *g_p(char *s, op_t *p, va_list a)
{
int i = 0;

if (*s != '.')
	return (s);
s++;

if (*s = '*')
{
i = va_arg(a, int);
s++;
}
else 
{
	while (_i_d(*s))
		i = i * 10 + (*s++ - '0');
}
p->pres = i;
return (s);
}
