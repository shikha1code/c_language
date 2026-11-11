#include <stdio.h>
#include<string.h>
 
struct employee{

    int code;
    float salary;
    char name[30];
};

void show(struct employee e1){
    printf("%d %f %s\n",e1.code,e1.salary,e1.name);

}


int main(){

    struct employee e1;
    e1.code = 34;
    e1.salary = 45000.00;
    strcpy(e1.name,"shikha");
    show(e1);


    
    return 0;
}