#include <stdio.h>

int main(){
    int num = 8,product, sum =0;
    for (int i = 1; i <=10; i++)
    {
        product = (8*i);
        sum+=(8*i);
    }
    printf("The sum of multiples of 8 is %d\n",sum);
    
    return 0;
}