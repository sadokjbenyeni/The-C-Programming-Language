#include <stdio.h>

// Program that replaces spaces in the input with the proper number of tabs.
int main()
{
    int c, sc; // Character to read, number of clicked spaces.
    sc = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            sc = 0;
        if (sc == 3)
        {
            putchar('\t');
            sc = 0;
        }
        if (c != ' ')
            putchar(c);
        else if (c == ' ')
        {
            sc++;
            if (sc < 3)
                putchar(' ');
        }
    }
    return 0;
}