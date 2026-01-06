#include <stdio.h>
#include <string.h>

int main()
//copy elements of string
{
    char s1[20];
    char s2[20];
    printf("Enter the string: ");
    gets(s1);
    //strcpy(s2,s1);                  //by using inbuilt function
    int i=0;
    while(s1[i])
    {
        s2[i] = s1[i];
        i++;
    }
    printf("the string copied is : ");
    puts(s2);
    return 0;
}