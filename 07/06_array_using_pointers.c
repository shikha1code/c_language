#include <stdio.h>

int main(){
    int marks[] = {12 , 34 , 53 ,45};

     int* ptr = &marks[0];
    // int* ptr = marks; same as  int* ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        
        printf("The marks at index %d is %d\n",i, *ptr);
        printf("The marks at index %d is %d\n",i,marks[i]);
        ptr++;
    }
    
    return 0;
}