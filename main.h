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
/**comment for you Ahmed I create 1 - _puts , _putchar in putput.c file 
 * 2 - i create specifier array of struct in specifier.c file i creat for (c, s, %, b, S, p, R)
 * and let you rest of it (d, i, o, u, x, X) you can add it inside same file.
 * in same file i made get_print_func which complete the previous func to return the pointer to 
 * function will print. in same file i made one flag which '-', the rest ('+', '#', '0') i let
 * you to add them. i made modifier fuction for ('h','l'), width func i made it
 * 3 - in p_f.c file i made print func for (char, percenr%, S) i will make for binary
 * and the rest like ('i', 'u', 'x', 'X', 's'<string)
 * 4 - i did in print.c file the function print any thing you can check it. i illustrate to you 
 * each other func i used in it in the file.
 * 5 - in file params.c i initiliaze struct a to 1 expect (plus, hashtag, space, zero) i let you 
 * them like i said above about specifier file so you can add them in two file like you prefer 
 * and in my main.h file.
 * 6 - in file h.c i made R rot 13 and let you r func which reverse string in task 13. in same
 * file i did p_f_t func to know my start and end point for function which print any thing in file
 * print.c.*/
/*modules*/
int _puts(char *str);
int _putchar(int c);
/**
 * struct a - struct for ((h , l modified) , persicion, minus flag)
 * @l_m: long modifier
 * @h_m: h modifier
 * @p: persicion
 * @unsign: unsign
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
unsigned int w;
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
int g_p_f(char *s, va_list a, op_t *p); /*get print func to complete
					 above func*/ 
int g_m(char *s,op_t *p); /*module func*/
char *g_w(char *s, op_t *p, va_list a); /*width func*/
int p_f_t(char *s, char *p, char *e); /*printfromto func*/
void i_p(op_t *d, va_list a); /*fuc initiate struct*/
int _i_d(int c);/*function to check for digit*/
int _strlen(char *s); /*function to get lengh of string*/
char *g_p(char *s, op_t *p, va_list a); /*percision func*/
int _printf(const char *format, ...); /*func to print any thing*/
#endif
