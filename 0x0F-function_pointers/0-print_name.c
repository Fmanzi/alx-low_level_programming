#include <stdio.h>

/*
 *print_name - function
 */
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
