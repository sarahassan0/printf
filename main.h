#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>


int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
int get_precision(const char *format, va_list *args);
int prnt_c(va_list *args);
int prnt_str(va_list *args);
int prnt_int(va_list *args);
int convert2Hex(char hex[]);
int checkOctal(int octal);
int convertOctal2Decimal(int octal);

#endif /* MAIN_H */

