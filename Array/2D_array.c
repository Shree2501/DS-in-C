#include <stdio.h>
int main()
//2d array
{
    int b[3][4],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
        printf("\nEnter the value of b[%d][%d] : ",i+1,j+1);
        scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}