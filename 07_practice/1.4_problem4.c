#include <stdio.h>

int main(){
    int n; 
    scanf("%d\n",&n);
    int array[10];
    printf("Table of %d:\n",n);
   

    for (int i = 0; i < 10; i++)
    {
        array[i] = n * (i + 1);

    }

    for (int i = 0; i < 10; i++)
    {
       printf("The value of %d X %d is %d\n", n ,i + 1,array[i]);
       
    }

    return 0;
}