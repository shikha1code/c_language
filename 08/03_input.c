#include <stdio.h>

int main(){
    char st[4];
    scanf("%s",st);
    printf("%s",st);
    return 0;
}
// scanf automatically adds null character at the end of string
// scanf can't be used to print multi-word strings with spaces. 