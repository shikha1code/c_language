#include <stdio.h>

int sum(int * , int *);
int sum(int* a , int* b){
    *a = 5;
    return *a + *b; 
}

int main(){
    int x = 3,y = 5;

    printf("The sum of a and b is %d\n",sum(&x,&y));
    // Only copies of x and y are sent to a and b.
    printf("The value of x is %d\n",x);

    return 0;

}