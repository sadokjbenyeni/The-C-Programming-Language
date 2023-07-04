#include <stdio.h>

int any(char s1[], char s2[])
{
    int i,j;
    for (j = 0; s2[j] != '\0' ; j++)
        for (i = 0; s1[i] != '\0' ; i++)
            if(s2[j] == s1[i])
                return i;
    return -1;
}


int main(void)
{
    char s1[] = "Hello";
    char s2[] = "Hannah";
    char s3[] = "Anna";
    printf("%d\n", any(s1, s2));
    printf("%d\n", any(s1, s3));
    return 0;
}