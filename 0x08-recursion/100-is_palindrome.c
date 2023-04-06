#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int i = 0, j = 0;
while (s[j] != '\0')
j++;
j--;
while (i < j)
{
if (s[i] != s[j])
return (0);
i++;
j--;
}
return (1);
}
