#include <stdio.h>

int main(){
    int num;
    printf("Enter the no:\n");
    scanf("%d",&num);
    int product = 1;
    for (int i = 1; i <= num; i++)
    {
        product *= i;
    }
    printf("The factorial of a no. is %d\n",product);
    return 0;
}