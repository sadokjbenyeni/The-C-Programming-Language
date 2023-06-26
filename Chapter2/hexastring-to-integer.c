#include<stdio.h>

/*htoi: convert string of hexadecimal to integer*/
int hexatoint(char s[])
{
    int i, n;

    n = 0;
    for(i = 2; (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'f') || (s[i] >= 'A' && s[i] <= 'F'); ++i)
        if(s[i] >= 'a' && s[i] <= 'f')
            n = 16 * n + s[i] - 87;
        else if(s[i] >= 'A' && s[i] <= 'F')
            n = 16 * n + s[i] - 55;
        else
            n = 16 * n + (s[i] - '0');
    return n;
}

int main(void)
{
    printf("%d\n", hexatoint("0xaf45"));
}