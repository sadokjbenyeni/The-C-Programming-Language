#include <stdio.h>

/* counts blanks, tabs and newlines */
int main(void)
{
    int c, nl, t, b;
    nl = 0, t = 0, b = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++t;
        else if (c == ' ')
            ++b;
    }
    printf("tabs: %d, lines: %d, blank: %d\n", t, nl, b);
    return 0;
}