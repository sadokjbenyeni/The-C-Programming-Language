#include <stdio.h>

int lower_char(int c)
{
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : 0;
}

int main(void)
{
    printf("%c\n", lower_char('D'));
}