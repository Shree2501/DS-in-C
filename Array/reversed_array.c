#include <stdio.h>
int main()
//reverse array
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter %d element of an array: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=4;i>=0;i--)
    {
        printf("REversed array %d\n",arr[i]);
    }
    return 0;
}
