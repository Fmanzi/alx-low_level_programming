#include "function_pointers.h"
#include <stdio.h>

/*
 *print_name - function
 *@name: name to print
 *@f: pointer to fn printing a name
 */
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
