#include <stdio.h>

int i = 0,count;
int strlen( char s[]){
char c = s[i];
while(c != '\0'){
    c = s[i];
    i++;
}
count = i - 1;
return(count);}
int main(){
    char str[] = "shikha kumari";

    strlen(str);
    printf("%d",count);


    return 0;
}