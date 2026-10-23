#include <stdio.h>

int main(){

    char i = 'A';
    
    printf("The address of i is %p\n",&i);
    char *j = &i;
    printf("The address of i is %p\n",j);
    float k = 4.456;
    float *k1 = &k;
    printf("The value at address of k is %f\n",*(&k));
    return 0;
}