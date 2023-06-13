#include <stdio.h>

/* copy the input to the output and replace each string one
 or more blanks by a single blank*/

int main(void)
{
    int c, blank;
    blank = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (blank == 0)
            {
                putchar(' ');
                ++blank;
            }
            else if (blank > 0)
                continue;
        }
        else
        {
            putchar(c);
            blank = 0;
        }
    }
    return 0;
}