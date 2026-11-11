#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "mummy";
    char c = 'i';
    int count = 0;
    int contains = 0;

    for (  int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
           contains = 1;
           break;
        }
    }
    if (contains)
    printf("present\n");
    else
    printf("Absent\n");


    return 0;
}