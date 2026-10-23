#include <stdio.h>
void swap(int* , int* );
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 3,y = 4;
    swap(&x,&y);
    printf("The value of x is %d and the value of y is %d\n",x,y);

    return 0;
}