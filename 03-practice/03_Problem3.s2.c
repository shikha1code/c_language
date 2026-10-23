#include <stdio.h>

int main(){
    float income;
    float tax;
    printf("Enter income : ");
    scanf("%f",&income);
    if(income<=2.5){
        tax=0;
    }
    else if(income>=2.5 && income<=5.0){
        tax=0.05*(income-2.5);
    }
    else if(income>=5.0 && income<=10.0){
        tax=0.05*(5.0-2.5)+0.2*(income-5.0);
    }
    else{
        tax=0.05*(5.0-2.5)+0.2*(10.0-5.0)+0.3*(income-10.0);
    }
    printf("The tax ix %.3f",tax);
    return 0;
}