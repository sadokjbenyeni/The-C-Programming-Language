#include <stdio.h>
#define MAX_LENGTH 100

char* reverse(char* s, int len);
int getlines(char s[]);

int main(void)
{
    int len;              
    char line[MAX_LENGTH];   
    while ((len = getlines(line)) > 0)
    {
        reverse(line, len);
        printf("%s\n", line);
    }
    return 0;
}

int getlines(char s[])
{
    int c, i;
    for (i = 0; s[i] == '\0' && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

char* reverse(char* s, int len)
{
    char rev[MAX_LENGTH];
    for(int i = 0; i < len; ++i)
        rev[i] = s[len - i - 1];
    for(int i = 0; i <  len; ++i)
        s[i] = rev[i];
    return s;
}