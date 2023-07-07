#include <stddef.h>

/* strlen: return length of string s */
int strlen(char *s)
{
    int n;

    for(n = 0; *s != '/0'; s++)
        n++;
    return n;
}

/* strlen: return length of string s */
size_t strlen(char *s)
{
    char *p = s;
    while (*p != '\0')
        p++;
    return p - s;
}