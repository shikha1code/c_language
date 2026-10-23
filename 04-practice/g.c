#include <stdio.h>

int main(){
    int num; // 345
    printf("Enter a 3 digit no : ");
    scanf("%d",&num);
    int a,b,c,d,sum;
    a = num%10; // 5
    b = num/10; // 34
    c = b%10; // 4
    d = b/10; // 3
    sum = a+c+d;
    printf("The sum of digits of a 3-digit no. is %d\n",sum);
    



    return 0;
}