#include <stdio.h>
#include <string.h>

int main()
{
    char rev[10];
    char str[10];
    int len=0,i;
    printf("Enter the string: ");
    gets(str);
    while(str[len]!=0)
    {
        len++;
    }
    for(i=len-1;i>=0;i--)
    {
        rev[len-1-i] = str[i];
    }
    rev[len] = '\0';
    if(strcmp(rev, str) == 0)
    {
        printf("Palindrome");
    }
    else{
        printf("Not a palinfrome");
    }
    return 0;
}