#include <stdio.h>

int main(){
    int i = 10; // declaration and initialisation of i with 10
    int j = i; // declaration
    int a = 1, b = 2, c = 3;
    // %d is format specifier
    // %d : For int , %f : For float , %c : for characters
    printf("The value of i is %d and The value of j is %d\n",i,j);
    printf("The value of a is %d and The value of b is %d\n",a,b);
    printf("The value of c is %d and The value of i is %d\n",c,i);

    return 0;
}