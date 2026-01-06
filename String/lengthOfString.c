#include <stdio.h>
#include <string.h>

int main()
{
    int i=0;
    int length=0;
    char s1[20];
    printf("Enter the string: ");
    gets(s1);
    printf("\nthe length of string is: ");
 
    // printf("%d",strlen(s1));
    while(s1[i]!=0)
    {
        length++;
        i++;
    }
    printf("%d",length);
    return 0;
}