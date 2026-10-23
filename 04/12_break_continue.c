#include <stdio.h>

int main(){

    
    for(int i = 0;i < 15 ; i++ )

    { if (i==5){
        continue; // It terminates this iteration
        // break; // It terminates the loop
    }
        
        printf("The value of i is %d\n",i);
    }
    printf("For loop is done\n");


    return 0;
}