#include <stdio.h>

int main(){
    int marks[90]; // reserves space for 90 integers

    marks[0]= 98;
    marks[1]= 99;
    // we can go all the way up to marks[89]

    printf("marks 0 ans marks 1 are %d %d",marks[0],marks[1]);

    return 0;
}