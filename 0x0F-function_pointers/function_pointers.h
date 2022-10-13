#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H


int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, int size_t_size, void (*action)(int));
#endif
