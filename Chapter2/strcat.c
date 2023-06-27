#include <stdio.h>
#include <string.h>

/*strcat: convatenate t to end of s; s must be big enough*/
void strcopy(char s[], char t[])
{
    int i, j;
    i = j = 0;
    while(s[i] != '\0') /* find end of s */
        i++;
    while ((s[i++] = t[j++]) != '\0')
        ;
}

int main(void)
{
    char s[] = "Hello,";
    char t[] = " World!";
    strcopy(s, t);
    printf("%s\n", s);
    return 0;
}