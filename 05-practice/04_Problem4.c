// fibonacci series: 0,1,1,2,3,5.....

#include <stdio.h>

int fibonacci(int);


 
int fibonacci(int n){
  if(n==1 || n==2){
  return n-1;
  }
return fibonacci(n-1)+fibonacci(n-2);


}


 



int main(){
    int n=5;
    fibonacci(n);
    printf("The %d element of fibonacci series is %d\n",n,fibonacci(n));


    return 0;
}