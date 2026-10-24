#include <stdio.h>

int main(){
    int array[]= {1,2,3,4,5,6,7,8,9,10};
    int* ptr = &array[0];

    printf("The first element of array is %d\n",*ptr);
    ptr = ptr + 2;
   ;
   
    printf("The third element of array is %d\n",*ptr);

    return 0;
}