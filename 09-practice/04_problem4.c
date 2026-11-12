#include <stdio.h>
typedef struct employee{
    int salary;
    float score;

} Emp;

int main(){
    Emp E1;
    Emp* ptr = &E1;
    // (*ptr.)salary = 56000;
    ptr->salary = 56000;
    ptr->score = 100.9;
    printf("%d %f",ptr->salary,ptr->score);
    
    return 0;
}