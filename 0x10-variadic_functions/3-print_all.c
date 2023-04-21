#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - function call
 *@format: placeholder variable
 *
 */
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
unsigned int i = 0;
char c;
int n;
float f;
char *s;
while (format != NULL && format[i] != '\0')
{
if (i > 0)
{
printf(", ");
}
switch (format[i])
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
n = va_arg(args, int);
printf("%d", n);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
s = va_arg(args, char *);
if (s != NULL){
printf("%s", s);
}
else
{
printf("(nil)");
}
break;
}
i++;
while (format[i] != '\0' && format[i] != 'c' && format[i] != 'i' && format[i] != 'f' && format[i] != 's')
{
i++;
}
}
va_end(args);
printf("\n");
}
