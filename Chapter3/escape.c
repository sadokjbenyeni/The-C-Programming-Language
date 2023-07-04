#include <stdio.h>
/*Requires improvements*/
void escape(char s[], char t[])
{
    int i = 0;
    int j = 0;
    int c = 0;
    for (i, j; s[i] != '\0'; i++)
    {
        switch (s[i])
        {
        case ' ':
            c++;
            break;
        default:
            if(c >= 4)
            {
                t[j++] = '\\';
                t[j++] = 't';
                c -= 4;
            }
            if(c > 0)
            {
                while (c > 0)
                {
                    t[j++] = ' ';
                    c--;
                }
            }
            t[j++] = s[i];
            break;
        }
    }
    t[++j] = '\0';
}

int main(void)
{
    char c;
    char s[] = "Hello       World!";
    char t[50]; 
    int i = 0;
    escape(s, t);
    printf("%s\n", t);
    return 0;
}
