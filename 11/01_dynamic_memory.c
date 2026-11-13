#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d",&n);
    // int arr[n]; // changing the size of an array is not allowed
    ptr = (int*) malloc(n* sizeof(int));
    ptr[0] = 3;
    ptr[1] = 1;
    printf("%d",ptr[0]);

    return 0;
}