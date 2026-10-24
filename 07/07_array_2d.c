#include <stdio.h>

int main(){
    int arr[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of arr[%d][%d] ",i,j);
            scanf(" %d", &arr[i][j]);
            printf("The value of array[%d][%d] is %d",i,j,arr[i][j]);
        }
        
    }

    return 0;
}