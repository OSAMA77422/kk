#include "main.h"

/**
 * i_p - inits para
 * @a: argumenr
 * @p: paramter
 * Return: void
*/
void i_p(op_t *d, va_list a)
{
	d->unsign = 0;
	d->l_m = 1;
	d->h_m = 1;
	d->p = 1;
	d->m = 1;
	d->pres = UINT_MAX;
	(void)a;
}
