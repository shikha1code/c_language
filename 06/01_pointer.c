#include <stdio.h>

int main(){

    int i = 54;
    // %u : gives address in integer format
    printf("The address of i is %p\n",&i);
    int *j = &i; // j is a pointer pointing to i (j is a integer pointer) 
    printf("The address of i is %p\n",j);
    printf("The value at address j is %p\n",*(&j));
    return 0;
}