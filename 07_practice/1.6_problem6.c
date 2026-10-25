#include <stdio.h>
void count_func(int a[],int n){
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 ){

            count++;

        }
    }
    printf("The no. of positive integers in an array is %d\n",count);
}

int main(){

   int array[]= {2 , -3 , 4, - 4, 9 };

   count_func(array,5);
   
    return 0;
}