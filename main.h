#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_chars(va_list args);
int _strlen(char *s);
int _strlen_const(const char *s);
void print_percentage(void);
int print_strings(va_list args);
int print_upper_hex(unsigned int num);
int print_custom(va_list arg);
int print_lower_hex(unsigned long int num);
int print_pointer(va_list arg);
int reverse_string(va_list args);
int string_rot13(va_list args);
#endif
