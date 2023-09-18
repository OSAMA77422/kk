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
