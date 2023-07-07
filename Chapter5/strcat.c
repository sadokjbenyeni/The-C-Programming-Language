#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

/*strcat: concatenate t to end of s; pointer version*/
void strcopy(char *s, char *t)
{
    int i = 0;
    int j = 0;

    while (*s++ != '\0') i++;
    while (*t++ != '\0') j++;
    
    if(i + j > MAX_SIZE)
        return;
    
    s -= 1;
    t = t-j-1;

    while ((*s++ = *t++) != '\0')
        ;

    s = s-i-j-1;
    printf("%s\n", s);
}



int main(void)
{
    char s[MAX_SIZE] = "Hello,";
    char t[MAX_SIZE] = " World!";
    strcopy(s, t);
    return 0;
}