#include <stdio.h>
// r works in fgets only;w,a works in fputs only 

int main()
{
    FILE* ptr;
    ptr = fopen("sooty.txt","a");
    // char c = fgetc(ptr); // this is used to read a character from the file
    // printf("%c",c);
    
    fputc('g',ptr);// used to write a character to the file
    
    return 0;
}