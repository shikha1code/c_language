// https://www.scribd.com/document/522298201/ASCII-Table

#include <stdio.h>

int main(){
    char input;
    printf("Display the input :\n");
    scanf("%c",&input);
    printf("The ASCII value is %d\n",input);
    // 97,122
    if(input>=97 && input<=122){
        printf("The given input is a lower case \n");
    }
    else{
        printf("The given input is not a lower case \n");
    }

    
    return 0;
}