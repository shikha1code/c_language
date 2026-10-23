#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n",i); // 5
    i = i + 5;
    printf("The value of i is %d\n",i); // 10
    // ++i; // i++;
    printf("The value of i is %d\n",i++); // 10


    printf("The value of i is %d\n",i); //11

    // i++ : first print i then increment by 1(Post increment operator)
    // ++i : first increment by 1 then print (Pre increment operator)
    i+=2; // exactly sames as i = i + 2
     // += is a compound assignment operator

    printf("The value of i is %d\n",i); //13


    return 0;
}