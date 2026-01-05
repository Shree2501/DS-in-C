#include <stdio.h>

int main()
//find one duplicate element
// {
//     int i,j,ar[5],duplicate=-1;
//      printf("Enter elements of an array:\n "); 
//     for(int i=0; i<5;i++)  
//      scanf("%d",&ar[i]);                    
//     for(i=0;i<5;i++)
//     {
//         for(j=i+1;j<5;j++)
//         { 
//             if(ar[i]==ar[j])
//             {
//                 duplicate=ar[i];
//                 break;
//             }
//         }
//     }
//     printf("the element  %d is duplicate ",duplicate);
//     return 0;
// }

// find more than 1 duplicate elements
{
    int i,j,ar[5];
    printf("Enter elements of an array:\n "); 
    for(int i=0; i<5;i++)  
     scanf("%d",&ar[i]); 
     
    printf("the duplicate elements are : ");
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        { 
            if(ar[i]==ar[j])
            {
                printf("%d ",ar[i]);
                break;
            }
        }
    }
    return 0;
}