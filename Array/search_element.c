#include <stdio.h> 
int main()
//search element
// {
//     int a[5]={1,2,3,4,5};
//     int find,get=0,pos;
//     printf("Enter a number you want to search: ");
//     scanf("%d",&find);
//     for(int i=0;i<5;i++)
//     {
//         if(a[i]==find)
//         {
//             get=1;
//             pos=i+1;
//         }
//     }
//     if(get==1){
//         printf("Element found at %d position: ",pos);
//     }
//     else{
//         printf("Element not found ");
//     }
//     return 0;
// }

//find how many times the element occured
{
    int i,ar[5],n,a,count=0;
    printf("Enter elements of an array:\n "); 
    for(int i=0 ; i<5 ; i++)  
    scanf("%d",&ar[i]);
    printf("enter the element to search: ");
    scanf("%d",&n);
    for(int i=0; i<5;i++)
    {
        if(n==ar[i])
        count++;
    }
    printf("the element occured %d times",count);
    return 0;
}