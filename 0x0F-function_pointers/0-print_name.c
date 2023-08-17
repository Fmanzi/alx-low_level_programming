#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a funct that prints a name using a given function
 * @name: name of the person
 * @f: pointer to a function that formats the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
