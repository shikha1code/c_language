#include <stdio.h>

int sum(int* , int*);                                 
 
int sum(int* x , int* y){
    int s = *x + *y;
    int* ptr = &s;
    printf("The sum is %d\n",s);
    printf("The address of s is %p\n",ptr);
    return 1;
}
float average(int* , int*);
float average(int* x , int* y){
    float avg = (*x + *y)/2.0;
    float* ptr = &avg;
    printf("The average is %f\n",avg);

    printf("The address of avg is %p\n",ptr);

    return 1;
}

int main(){
    int x = 3, y = 5;
    sum(&x,&y);
    
    average(&x,&y);
    
    return 0;
}
/* note : s is a local variable so it will be stored (in form of stacks) in RAM temporarily.Its memory would be stored up to execution of sum function.
This is the reason behind same address of s and avg due to free of memory as both are local variables */