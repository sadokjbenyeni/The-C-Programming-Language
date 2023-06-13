#include <stdio.h>

/* Copy the input to the output, replace each tab by \t,
each backspace by \b, and backslash by \\*/

int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\\' || c == '\t')
        {
            putchar('\\');
            if (c == '\\')
                putchar('\\');
            else if (c == '\t')
                putchar('t');
        }
        else
            putchar(c);
    }
    return 0;
}