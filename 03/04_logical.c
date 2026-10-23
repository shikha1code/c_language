#include <stdio.h>

int main(){
    int a=1; int b =1;
    printf("The value of a and b is %d\n",a&&b);
    printf("The value of a or b is %d\n",a||b);
    printf("The value of not operator is %d\n",!a);
    int c = 4;
    printf("The value of not operator is %d\n",!c);
    int d = 1;
    printf("The value of not operator is %d\n",!d);

    if(a&&b){
        printf("Both are true\n");
    }
    // both 13 & 17 are same.
    if(a){
        if(b){
        printf("Both are true\n");
        }
    }

    return 0;
}