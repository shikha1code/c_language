#include <stdio.h>
#include <string.h>

struct employee{

    int code; // This declares a new user datatype
    float salary;
    char name[100];
    
}; // semicolon is important

int main(){

    struct employee facebook[100]; // array
    // we can access data using:
    facebook[0].code = 100;
    facebook[0].salary = 100;
    strcpy(facebook[0].name , "shikha");
    
    facebook[1].code = 101;
    facebook[1].salary = 101;
    strcpy(facebook[1].name , "shreya");

    for (int i = 0; i < 2; i++)
    {
        printf("%d\t",facebook[i].code);
        printf("%f\t",facebook[i].salary);
        printf("%s\t",facebook[i].name);
        printf("\n");
    }
    struct employee details = {100, 45000,"sandy"};
    // The way of initializing structure
    printf("%d %f %s",details.code,details.salary,details.name);


    
    return 0;
}