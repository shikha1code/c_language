#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "mummy";
    char c = 'm';
    int count = 0;

    for (  int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
            count++;
        }
        
        
    }
    printf("occurence of given character is %d\n",count);
    
    
    return 0;
}