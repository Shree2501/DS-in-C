#include <stdio.h>

int main()
//largest element
// {
//     int arr[5];
//     for(int i=0;i<5;i++)
//     {
//         printf("Enter %d element of an array: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int large=arr[0];
//     for(int i=0;i<=4;i++)
//     {
//         if(arr[i]>large)
//         {
//             large=arr[i];
//         }
//     }
//     printf("The largest element is: %d",large);
// }

//2 largest element
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter %d element of an array: ",i+1);
        scanf("%d",&arr[i]);
    }
    int large1=arr[0],large2=-1;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>large1)
        {
            large2=large1;
            large1=arr[i];
        }
        else if(arr[i]>large2)
        {
            large2=arr[i];
        }
    }
    printf("The largest element is: %d\n",large1);
    printf("The second largest element is: %d",large2);    
}
