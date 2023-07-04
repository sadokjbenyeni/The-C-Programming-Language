#include <stdio.h>

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}

int main(void)
{
    printf("%d\n", getbits(10,4,3));
    return 0;
}