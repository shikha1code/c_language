#include <stdio.h>

int main(){
    int i = 6;
    int *j = &i;
    int **k = &j;
    int ***l = &k;


    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The value of i is %d\n",*(&i));
    printf("The value of i is %d\n",**(&j));
    // *& cancel each other 

    return 0;
}