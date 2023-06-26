#include <stdio.h>

int lower_char(int c)
{
    if(c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else 
        return 0;
}

int main(void)
{
    printf("%c\n", lower_char('D'));
}