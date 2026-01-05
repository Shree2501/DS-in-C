#include <stdio.h>

int main()
//Address calculation 1D Array
// {
// 	int a[5],i,*B,w,L=0,*Addr1;
// 	int i1,i2;
// 	for(i=0; i<5; i++)
// 	{
// 		printf("Enter the %d element of an array: ",i+1);
// 		scanf("%d",&a[i]);
// 	}
// 	B = &a[0];
// 	printf("%d\n",B);
// 	w = sizeof(a[0]);
// 	printf("%d",w);
// 	printf("\nEnter index 1:");
// 	scanf("%d",&i1);
// 	Addr1=(B+(w*(i1-L)));
// 	printf("Address = %d",Addr1);
// 	printf("\nAddress = %d",&a[i1]);
// }

//Address calculation 2D Array
{
	int arr[3][3];
	int i, j;

	printf("Enter 9 elements for 3x3 matrix:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	printf("\nMatrix in Column-wise format:\n");
	for (j = 0; j < 3; j++) {
		for (i = 0; i < 3; i++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	int r, c;
	printf("\nEnter row index (0-2): ");
	scanf("%d", &r);
	printf("Enter column index (0-2): ");
	scanf("%d", &c);

	int w = sizeof(arr[0][0]);  
	int *base = &arr[0][0];

	// RMO formula: LOC = Base + [ (r * totalColumns) + c ] * w
	int *addr_RMO = base + ((r * 3) + c) * w;

	// CMO formula: LOC = Base + [ (c * totalRows) + r ] * w
	int *addr_CMO = base + ((c * 3) + r) * w;

	printf("\nAddress Calculation\n");

	printf("Base address           : %p\n",base);
	printf("Address using RMO      : %p\n",addr_RMO);
	printf("Address using CMO      : %p\n",addr_CMO);

	return 0;
}