#include <stdio.h>


#define IN  1       /* inside a word */
#define OUT 0       /* outside a word */

/*Print input one word per line*/

int main(void)
{
    int c, status;
    status = OUT;
    while ((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t')
            status = OUT;
        else
        {
            putchar(c);
            status = IN;
        }
        if(status == OUT)
            putchar('\n');
    }
    return 0;
}