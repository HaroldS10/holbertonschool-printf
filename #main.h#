y#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct cases - Struct for print cases
 * @pfcase: Character for case
 * @convfun: Conversion function
 */

typedef struct cases
{
	char *pfcase;
	int (*convfun)(va_list n, char *buff, int print_len);
} print_cases;

char *_itoa(int num, char *s, unsigned int base);
int _printf(char *format, ...);
int replace(char *buffer, char *s, int print_len);
int (*get_cases_type(char *arg))(va_list, char *, int);
int case_ch(va_list, char *, int);
int case_str(va_list, char *, int);
int perc_case(va_list, char *, int);
int dec_case(va_list, char *, int);
int bin_case(va_list, char *, int);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void _revstr(char *s);

#endif
