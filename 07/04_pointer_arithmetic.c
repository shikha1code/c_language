// RUN THE PROGRAM!!
#include <stdio.h>

int main(){
    // POINTER ARITHMETIC USING INT POINTER
    /*int a = 5;
    int* ptr1 = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The address of a is %u\n", ptr);
    */ 
    // POINTER ARITHMETIC USING CHARACTER POINTER
    char a = 5;
    char* ptr1 = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr1);
    ptr1++;
    printf("The address of a is %u\n", ptr1);
    ptr1 = ptr1 +1;
    printf("The address of a is %u\n", ptr1);
    ptr1 = ptr1 - 2;
    printf("The address of a is %u\n", ptr1);
    
    char b = 4;
    char* ptr2 = &b;
    printf("The address of b is %u\n", ptr2);


    /*    NOTE: Increment in pointer => increment acc to size of data type
          like size of char is 1 byte , size of int is 4 bytes in my system.*/
    printf("%ld\n", ptr2 - ptr1);           


   return 0;
}
