#include <stdio.h>

int main(){
    int a = 7;
    int* ptr = &a;
    printf("The address of a is %u\n",&a);
    printf("The value at a is %d\n", *ptr);
    return 0;
}