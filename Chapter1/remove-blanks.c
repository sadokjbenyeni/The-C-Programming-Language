#include <stdio.h>

int main(void)
{
    int c, prev;
    prev = getchar();
    if (prev != ' ')
        putchar(prev);
    while ((c = getchar()) != EOF)
    {
        if (prev == ' ' && c == '\n' || prev == ' ' && c == ' ')
            continue;
        else
            putchar(c);
        prev = c;
    }
    return 0;
}