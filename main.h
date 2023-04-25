#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>



int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
int get_precision(const char *format, va_list *args);
int prnt_c(va_list *args);
int prnt_str(va_list *args);
int prnt_num(va_list *args);

#endif /* MAIN_H */

