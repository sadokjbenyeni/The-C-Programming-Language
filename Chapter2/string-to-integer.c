#include<stdio.h>

/*atoi: convert s to integer*/
int arrtoint(char s[])
{
    int i, n;

    n = 0;
    for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

int main(void)
{
    printf("%d\n", arrtoint("1995"));
}