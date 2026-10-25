/*
array[3][10]={{2,4,6,8,10..},{3,6,9,12..},{9,18,27,36..}}
*/ 
#include <stdio.h>

int main(){
    int array[3][10];
    int numbers[]= {2 , 3 , 9};
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            array[i][j] = numbers[i] * (j+1);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The table  of %d\n",numbers[i]);
        for (int j = 0; j < 10; j++)
        {
           printf("%d x %d = %d\n",numbers[i],j+1,array[i][j]);
        }
        
    }
    
    return 0;
}
