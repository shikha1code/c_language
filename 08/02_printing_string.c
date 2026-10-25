#include <stdio.h>

int main(){
    // char st[4] = {'a','b','c','\0'};
    char st[] = "abc"; // same as doing above

    
   /* for (int i = 0; i < 3; i++)
    {
        printf("%c",st[i]);
        
    }
    */
   printf("%s",st);    

    return 0;
}