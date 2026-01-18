#include <stdio.h>
void selectionSort(int arr[],int n){
    int temp,minindex;
    int i,j;
    for(i = 0; i < n-1; i++){
        minindex = i;
        for(j = i+1; j < n; j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
}

int main(){
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Selection Sorted values : ");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}