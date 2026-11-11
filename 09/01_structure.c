#include <stdio.h>
#include <string.h>


struct employee
{
    int code;
    float salary;
    char name[60];

};


int main(){
    struct employee e1;
    e1.code = 234;
    e1.salary = 34000.00;
    strcpy(e1.name , "Nishi");

    printf("%d %f %s" , e1.code , e1.salary , e1.name);

    return 0;
}