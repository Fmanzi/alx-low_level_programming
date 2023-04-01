/**
 * rot13 - encodes a string using the rot13 cipher
 * @str: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
int i;
char c;
char *ptr = str;
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (*ptr != '\0')
{
i = 0;
while (alpha[i] != '\0')
{
if (*ptr == alpha[i])
{
c = rot13[i];
break;
}
else
{
c = *ptr;
}
i++;
}
*ptr++ = c;
}
return (str);
}
