#include <stdio.h>
#include <stdlib.h>

char string_length(char s[])
{
    int count =0;
    while(s[count]!= '\0')
    {
        count++;
    }
return count;
}



void main()
{
    int len;
    len = string_length("aaa");
    printf("The length of the string is: %d",len);
}
