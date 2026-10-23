// Write a program to print multiplation table of number n


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("This is a table of %d\n",n);
    
    
    for(int i = 1 ;i<=10;i++){
        printf("%d\n",n*i);

    }
    
    return 0;
}