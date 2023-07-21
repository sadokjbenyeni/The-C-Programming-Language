#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char* argv[])  /* lower: convert input to lower case */
{
    if(argc == 1 )
    {
        printf("Too few arguments, you need to precise lower or upper\n");
        return 0;
    }
    else if(argc > 2)
    {
        printf("Too many arguments, only provide one\n");
        return 0;
    }
    if((strcmp(argv[1], "lower") !=0) && ((strcmp(argv[1], "upper") !=0)))
    {
        printf("Only lower or upper are accepted as arguments\n");
        return 0;
    }
    
    int c;
    while((c = getchar()) != EOF)
        {
            if(strcmp(argv[1], "lower") == 0)
                putchar(tolower(c));
            else if(strcmp(argv[1], "upper") == 0)
                putchar(toupper(c));
        }
    return 0 ;
}