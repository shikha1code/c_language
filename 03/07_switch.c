#include <stdio.h>

int main(){
    int a;
    printf("Enter no:\n");
    scanf("%d",&a);

    switch(a){
        case 2:
        printf("You entered 1\n"); // NO need to follow ascending order in case(constant)
        
        case 1:
        printf("You entered 2\n");
        break;
        case 3:
        printf("You entered 3\n");
        break;
    
        default:
        printf("Nothing matched\n");
    








    }
    
    return 0;
}