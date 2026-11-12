#include <stdio.h>
typedef struct c{
    float real;
    float imaginary;
} complex;
void complex_display(complex c){
    printf("The value of complex no. is %f + %fi \n",c.real,c.imaginary);
}

int main(){
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part\n");
        scanf("%f",&carr[i].real);
        printf("Enter imaginary part\n");
        scanf("%f",&carr[i].imaginary);
        complex_display(carr[i]);

    }
    
    return 0;
}