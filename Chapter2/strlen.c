#include <stdio.h>

/* strlen: return length of s */
int strlength(char s[])
{
    int i;

    i = 0;
    while(s[i] != '\0')
        ++i;
    return i;
}

int main(void)
{
    printf("%d\n", strlength("Hello, World"));
}