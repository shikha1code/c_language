#include <stdio.h>

int main(){
    int a = 2;
    int b = 5;
    int c = a + b;
    printf("The value of a is %d and value of b is %d and sum is %d\n",a,b,c);
    // modulus operator : To get the remainder.
    printf("The value of remainder when b is divided by a is %d\n",b%a);

    // There is no operator for exponentiation in C .
    // int d = a^b; // this does not work for above.
    return 0;
}