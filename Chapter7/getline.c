#include<stdio.h>

/* get line: read a line, return length */
int getline(char *line, int max)
{
    if(fgets(line, max, stdin) == NULL)
        return 0;
    else    
        return strlen(line);
}