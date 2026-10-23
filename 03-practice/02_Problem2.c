#include <stdio.h>

int main(){
    float marks1,marks2,marks3;
    printf("Enter marks1\n");
    scanf("%f",&marks1);
    printf("Enter marks2\n");
    scanf("%f",&marks2);
    printf("Enter marks3\n");
    scanf("%f",&marks3);
    printf("The marks are %f , %f , %f\n",marks1,marks2,marks3);
    if(marks1>33 && marks2>33 && marks3>33){
        if((marks1+marks2+marks3)/3>40){
            printf("You are passed\n");
        }
        else{
            printf("You are failed due to less percentage\n");
        }
    }
    else{
        printf("You are failed\n");
    }


    return 0;
}