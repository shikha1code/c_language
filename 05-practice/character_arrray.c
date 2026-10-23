#include <stdio.h>

int main(){
    char name[50];
    printf("What'your name ?\n");
    scanf("%s",name);
    printf("your name %s\n",name);
    printf("the value at index(4) is %c",name[4]);
    return 0;
}