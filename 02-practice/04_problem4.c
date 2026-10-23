// Explain step by step evaluation of 3*x/y-z+k 


#include <stdio.h>
int main(){
    int x=2,y=3,z=3,k=1;
    // int f = 3*x/y-z+k;
     int f = 3*x;
     int p = f/y;
     int b = p-z;
     int c = b+k;

    printf("The value of f is %d\n",f);
    
    printf("The value of p is %d\n",p);
    
    printf("The value of b is %d\n",b);
    printf("The value of c is %d\n",c);
    
    return 0;
}