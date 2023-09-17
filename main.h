#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for thr ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct  printHandler - struct to choose the right function depending 
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printf function
 */

typedef struct printHandler
{
	char c;
	int (*f)(var_list ap, flags_t *f);
} ph;

/* print_nums */
int print_int(va_list 1, flags_t *f);
void print_number(int n);
int print_unsigned(va_list 1, flags_t *f);
int count_digit(int i);

/*print_bases */
int print_hex(va_list 1, flags_t *f);
int print_hex_big(va_list 1, flags_t *f);
int pirnt_binary(va_list 1, flags_t *f);
int print_octal(va_list 1, f;ags_t *f);

/* conveter */
char *convert(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* get_printf */
int (*get_printf(char s))(va_list, flags_t *);

/* get_flag */
	int get_flag(char s, flags_t *f);

	/*print_alpha */
	int print_string(va_list 1, flags_t *f);
	int print_char(va_list 1, flags_t *f);

	/* write_funcs */
	int _putchar(char c);
	int _puts(char *str);

	/* print_custom */
	int print_rot13(va_list 1, flags_t *f);
	int print_rev(va_list 1, flags-t *f);
	int print_bigS(va_list 1, flags_t *f);

	/*print_address */
	int print_address(va_list 1, flags_t *f);

	/* print_percent */
	int print_percent(va_list 1, flags_t *f);

#endif
