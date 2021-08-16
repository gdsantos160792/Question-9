#include <stdio.h>
#include <stdlib.h>
/*This program calculates the length of a string and return its value. */

/*Creating a function to count the length of the string*/

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
    /*testing the function*/
    int len;
    len = string_length("aaa");
    printf("The length of the string is: %d",len);
    return 0;
}
