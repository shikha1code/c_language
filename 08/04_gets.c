#include <stdio.h>

int main(){
    char st[30];

    gets(st); // entered string is stored in st
    printf("%s",st);
     // puts(st); puts() is used to output the string.
    printf("hey");
    
    return 0;
}
// note: gets is used to input the multi word string with backspace

/*
INTERVIEW: printf shows cursor in the same line but puts show cursor in the next line
*/