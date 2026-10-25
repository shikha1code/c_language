#include <stdio.h>

int main(){
    int array[3][10];
    int n1, n2, n3;
    scanf(" %d %d %d\n",&n1,&n2,&n3);
    int numbers[3] = {n1 , n2 ,n3};
    
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
