#include <stdio.h>

// Function Prototype
int sum(int x,int y);

// Function definition
int sum(int x,int y){
    // printf("The sum is %d\n",x+y);
   return x+y;
}


int main(){
    
   int a = 3,b = 5;
    // c = a+b;
     // printf("Sum is %d\n",c);
    // int c= sum(a,b); 
    // Function call // Temporarily a goes to x and b goes to y . x+y gets stored in sum(a,b)
    int c= sum(a,b); 
     printf("%d\n",c);

   int a1 = 30,b2= 5;
    // c = a+b;
     // printf("Sum is %d\n",c);
     
    int c2=sum(a1,b2); // Function call
    printf("%d",c2);
    sum(12,56); // Function call

    return 0;
}