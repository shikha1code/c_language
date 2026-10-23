#include <stdio.h>

int main(){
    int marks[] = {45,56,99};

    for (int i = 0; i < 3 ; i++)
    {
        printf("The marks at index %d is %d\n",i,marks[i]);
    }
    
    return 0;
}