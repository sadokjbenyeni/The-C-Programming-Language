#include <stdio.h>

int main()
{
    int c, tc, tl;
    tl = 3;
    tc = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            tc = 0;
        if (tc == 1)
            tl = 8;
        else if (tc == 0)
            tl = 3;

        if (c == '\t')
        {
            for (int i = 0; i < tl; i++)
                putchar(' ');
            tc++;
        }
        else
            putchar(c);
    }
    return 0;
}