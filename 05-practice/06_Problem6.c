#include <stdio.h>


int sum(int n );
int sum(int n ){
    if(n==1){
        return 1;
    }
    return sum(n-1)+n ;
}


int main(){
    int a = 7;
    sum(a);
    printf("The sum of first n natural numbers is %d\n",sum(a)  );
    return 0;
}