#include <stdio.h>
#include <string.h>
int main()
{
    int a[4],i,j;
    for(i=0;i<4;i++)
    {
        printf("enter the %d element of an array: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The array is: \n");
    for(j=0;j<4;j++)
    {
        printf("%d\t",a[j]);
    }
    return 0;
}