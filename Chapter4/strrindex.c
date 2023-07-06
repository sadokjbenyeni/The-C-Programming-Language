#include <stdio.h>
#include <string.h>
/* strindex: return rightmost index of t in s, -1 if none */

void reverse(char source[]);
int strindex(char source[], char searchfor[]);

int main(void)
{
    printf("%d\n", strindex("Hello", "lo"));
    return 0;
}

void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s)-1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int strindex(char s[], char t[])
{
    reverse(s);
    int i, j, k;
    for(i = 0; s[i] != '\0'; i++)
    {
        for(j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
            ;
        if(k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}