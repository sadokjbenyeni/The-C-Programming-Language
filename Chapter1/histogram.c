#include <stdio.h>

/*Histogram of the lengths of words in the input*/

int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
            putchar('\n');
        else
            putchar('_');
    }
    return 0;
}