#include "main.h"


/**
 * _isalpha - a function that checks for alphabet
 *
 * @c: char is the input of the function
 *
 * Return: Always 0 (Success)
 *
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
