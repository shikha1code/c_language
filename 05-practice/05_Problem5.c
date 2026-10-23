#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d\n",a,++a,a++); // Don't assume the output is : (4,5,5) or (6,6,4) .
// In C , different compilers show different order of execution. Some execute from left to right and some execute from right to left.
// So , both options are correct.
printf("%d",a); // a = 6

    return 0;
}