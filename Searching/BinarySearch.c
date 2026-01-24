#include <stdio.h>

int main()
{
    int a[5],i,mid,key,low=0,high=5,flag=0;
   
    for(i=0;i<5;i++)
    {
        printf("Enter  %d element of an array: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d",&key);
   
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            flag=1;
            break;
        }
        else if(key>=a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(flag==1)
    {
        printf("\nElement %d found at %d position",key,mid+1);
    }
    else
    {
        printf("\nelement %d not found",key);
    }
    return 0;
}