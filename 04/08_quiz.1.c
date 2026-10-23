// Printing natural no in backward direction 

#include <stdio.h>

int main(){
    int i;
    printf("Enter no:\n");
    scanf("%d",&i);


    
    do{
        printf("The value of i is %d\n",i);
        i--;
    }
    while(i>=1);
    return 0;
}