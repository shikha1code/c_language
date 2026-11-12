#include <stdio.h>
struct complex{
    float real;
    float imaginary;
};

int main(){
    struct complex C1;
    C1.real = 2.3;
    C1.imaginary = 4.6;
    // struct vector v1 = { 2.3 , 5.6};
    printf("complex no. is %f + %fi\n",C1.real,C1.imaginary);
    
    return 0;
}