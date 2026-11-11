#include <stdio.h>


char* slice( char s[],int m , int n){
    int i = 0,count;
char *ptr1 = &s[m];
char *ptr2 = &s[n];

s = ptr1;
s[n] = '\0';
return s;
}

int main(){
    char str[] = "shikha kumari";

    printf("%s",slice(str,1,7));
    return 0;
}