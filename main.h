#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h> /*which contain write function*/
#define OUT_PUT_B 1024 /*buffer 1024*/
#define B_F -1 /*buffer flash*/
#define OP_INIT {0, 0, 0, 0, 0, 0}
#define NULL_STRING "(null)"
/*modules*/
int _puts(char *str);
int _putchar(int c);
/**
 * struct a - struct for ((h , l modified) , persicion, minus flag)
 * @l_m: long modifier
 * @h_m: h modifier
 * @p: persicion
 * @m: minus flag
*/
typedef struct a
{
unsigned int unsign   :1;
unsigned int l_m  : 1;
unsigned int h_m  : 1;
unsigned int p    : 1;
unsigned int m    : 1;
unsigned int pres;
} op_t;

/**
 * struct s - specifier struct
 * @f: pointer to function of format
 * @specifier: type of format.
*/

typedef struct b
{
char *specifier;
int (*f)(va_list a, op_t *);
} s_t;

int p_s(va_list a, op_t *p); /*print string*/
int p_c(va_list a, op_t *p); /*print char*/
int p_p(va_list a, op_t *p); /*print percent*/
int p_b(va_list a, op_t *p); /*print binry*/
int p_a(va_list a, op_t *p); /*print address*/
int p_R(va_list a, op_t *p); /*print rot 13*/
int g_d(char *s, op_t *p); /*flag function*/
int p_S(va_list a, op_t *p); /*print s*/
int p_c(va_list a, op_t *p); /*print char*/
int (*g_f(char *s))(va_list a, op_t *p);/*specifier struct*/
int g_p_f(char *s, va_list a, op_t *p);
int g_m(char *s,op_t *p);
int p_f_t(char *s, char *p, char *e);
void i_p(op_t *d, va_list a);
int _i_d(int c);/*function to check for digit*/
int _strlen(char *s); /*function to get lengh of string*/
char *g_p(char *s, op_t *p, va_list a);
int _printf(const char *format, ...);
#endif
