#include <stdio.h>

int main(){
    char c;
    printf("Enter character\n");
    scanf("%c",&c);


    switch (c)
    {
    case 'A':
       case'a':
       printf("The given character is a vowel\n");
        break;
    case 'E':
       case'e':
       printf("The given character is a vowel\n");
        break;
    case 'I':
       case'i':
       printf("The given character is a vowel\n");
        break;
    case 'O':
       case'o':
       printf("The given character is a vowel\n");
        break;
    case 'U':
       case'u':
       printf("The given character is a vowel\n");
        break;
    
    default:
    printf("The given character is not a vowel\n");
        break;
    }
    return 0;
}