#include <stdio.h>
int factorial(int);

int factorial(int a){
    // factorial 5 = 5*4*3*2*1
    // factorial 4= 4*3*2*1
    // factorial(n) = factorial(n-1)*n

    if(a==1 || a==0){
    return 1;
    }
    return factorial(a-1)*a;
}

int main(){
    int b = 0;
    factorial(b);
    printf(" The factorial of %d is %d \n",b,factorial(b));
    
    return 0;
}