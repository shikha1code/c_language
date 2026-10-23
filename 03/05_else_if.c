#include <stdio.h>

int main(){

    int age = 60;
    if(age>65){
        printf("You can drive but you are old\n");
    }
    else if(age >45){
        printf("You can drive but you are elder\n");
    }
    else if(age>18){
        printf("You can drive\n");
    }
    else{ 
        printf("You can't drive\n");
    }

    return 0;
}