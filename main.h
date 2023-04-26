#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
int get_precision(const char *format, va_list *args);
int prnt_c(va_list *args);
int prnt_str(va_list *args);
int prnt_d(int d);

#endif /* MAIN_H */

