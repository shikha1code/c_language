#include <stdio.h>

int main(){
    // char st[4] = {'a','b','c','\0'};
    char st[4] = "abc"; // same as doing above

    
    for (int i = 0; i < 3; i++)
    {
        printf(" character is %c\n",st[i]);
        
    }
    return 0;
}