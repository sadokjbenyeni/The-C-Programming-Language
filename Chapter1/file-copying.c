#include <stdio.h>

/* copy input ot output; 1st version */
int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
    return 0;
}
