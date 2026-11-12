#include <stdio.h>
#include<string.h>
typedef struct employee{


    int code;
    float salary;
    char name[30];
}Emp;


int main(){
    // typedef int fruit;
    // fruit apple = 34;
    // printf("%d",apple);
    Emp e1;
    Emp* ptr;
    ptr = &e1;


    e1.code = 34;
    e1.salary = 45000.00;
    strcpy(e1.name,"shikha");
    printf("%d %f %s\n",e1.code,e1.salary,e1.name);
    printf("%d %f %s\n",ptr->code,ptr->salary,ptr->name);

    return 0;
}