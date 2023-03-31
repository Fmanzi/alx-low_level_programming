/**
 * _strncat - Concatenates two strings, taking at most n bytes from src
 * and appending them to dest, where dest is large enough to contain
 * both dest and src.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to take from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i;

/* Find the end of dest */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Copy at most n bytes from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

/* Add null terminator */
dest[dest_len + i] = '\0';

/* Return pointer to dest */
return (dest);
}
