#include <stdio.h>

/* count characters in input; 1st version*/
int main(void)
{
    double nc;
    for (nc = 0; getchar(); ++nc)
        ;
    printf("%.0f", nc);

    return 0;
} 