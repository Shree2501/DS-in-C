#include <stdio.h>
#include <string.h>
int main()
//Array of char and string
{
    char S1[20]={'S','h','r','e','e'};          //array of char
    char S3[20]={'S','h','r',101,'y','\0'};     //array of string
    char S2[20]="Sharma";                       //append \0 by default
    char S4[20];
    printf("%s",S1);
    puts(S2);                                   //shift in next line by default
    printf("%s",S3);
    printf("\nEnter the string: ");
    scanf("%[^\n]s",S4);                        //to read space-use [^\n]
    int len;
    len = strlen(S4);
    printf("\nthe length of string is %d",len);
    return 0;
}

