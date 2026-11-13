#include<stdio.h>
#include<stdlib.h>

int main(){
    float n = 5;
    float* ptr;
    
    // int arr[n]; // changing the size of an array is not allowed
    ptr = (float*) malloc(n* sizeof(float));
    ptr[0] = 3;
    ptr[1] = 1;
    ptr[2] = 8;
    ptr[3] = 5;
    ptr[4] = 9;

    printf("%f\n",ptr[0]);
    printf("%f\n",ptr[1]);
    printf("%f\n",ptr[2]);
    printf("%f\n",ptr[3]);
    printf("%f\n",ptr[4]);

    return 0;
}