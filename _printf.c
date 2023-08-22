#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    int a = 0;
    
    va_start(args, format);
    
    
    while (format[a])
    {
         
        if (format[a] == '%')
        {
            a++;
            switch (format[a])
            {
                case 'd':
                {
                    int x = va_arg(args, int);
                    printf("%d", x);
                    break;
                }
                case 'f':
                {
                    double x = va_arg(args, double);
                    printf("%f", x);
                    break;
                }
                case 'c':
                {
                    int x = va_arg(args, int);
                    printf("%c", x);
                    break;
                }
                case 's':
                {
                    char *x = va_arg(args, char*);
                    printf("%s", x);
                    break;
                }
                case 'x':
                case 'X':
                {
                    int x = va_arg(args, int);
                    printf("%x", x);
                    break;
                }
                case 'p':
                {
                    void *x = va_arg(args, void*);
                    printf("%p", x);
                    break;
                }
                case '%':
                    putchar('%');
                    break;
                default:
                    putchar(format[a]);
                    break;
            }
        }
        else
        {
            putchar(format[a]);
        }
        a++;
    }

    va_end(args);
    return 0;
}
