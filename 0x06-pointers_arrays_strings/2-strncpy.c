/**
 * _strncpy - Copies the first n bytes of the src string to dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
