#include <stdio.h>

int main()
{
    int key,i,flag=0,pos=-1;
    int a[5];
    
    for(int j=0; j<5;j++)  
    {
        printf("Enter %d elements of an array: ",j+1); 
        scanf("%d",&a[j]);
    }
    for(int k=0;k<5;k++)
    {
        printf("%d\t",a[k]);
    }
    printf("\nEnter the number to be searched: ");
    scanf("%d",&key);
    for(i=0;i<=5;i++)
    {
        if(a[i] == key)
        {
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Element %d found at %d position",key,pos+1);
    }
    else
    {
        printf("element %d not found",key);
    }
    return 0;
}
