#include <stdio.h>
#include <string.h>

int main(){
    char st[] = "shikha";
    char a1[50] = "shikha";
    char a2[] = "kumari";
    // printf("%d",strlen(st));
    strcat(a1,a2);
    printf("%s",a1);
    // char target[30];
    // strcpy(target,st); // target now contains "shikha"
    // printf("%s %s",st,target);
    return 0;

}
// note :strlen() basically counts no. of characters in string excluding
        //  null character