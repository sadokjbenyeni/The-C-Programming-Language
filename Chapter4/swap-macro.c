#include <stdio.h>

#define swap(x, y) {int z; z = x; x = y; y = z;}

int main(void)
{
    int a = 1;
    int b = 9;
    printf("a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}