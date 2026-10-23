// To display the largest no.

#include <stdio.h>

int main(){
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int largest = (n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3));
    printf("Largest is %d\n",largest);


    
    return 0;
}