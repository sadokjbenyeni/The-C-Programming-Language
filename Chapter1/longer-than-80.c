#include <stdio.h>

int main(void)
{
    int c, count;
    count = 0;
    while((c = getchar()) != EOF)
        if(++count >= 80)
            putchar(c);
    return 0;
}