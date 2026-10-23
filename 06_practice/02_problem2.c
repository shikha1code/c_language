#include <stdio.h>
int returning_5(int *);
int returning_5(int* ptr){
    printf("The value of ptr is %u\n",ptr);
    printf("The value at ptr is %d\n",*ptr);
    
    return 0;


    
    
}

int main(){
    int a = 7;
    int* ptr = &a;
    printf("The address of a is %u\n",&a);
    returning_5(&a);
    
    return 0;
}