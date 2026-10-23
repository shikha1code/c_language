#include <stdio.h>

int main(){
    int num,i = 1;
    scanf("%d",&num);
    int product = 1;
    while (i<=num)
    {
        product*=i;
        i++;
    }
    printf("The factorial of given no is %d\n",product);
    
    return 0;
}