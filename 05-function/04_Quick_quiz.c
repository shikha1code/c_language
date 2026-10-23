#include <stdio.h>
#include<math.h>

int main(){
    int side_length;
    printf("Enter side length :\n");
    scanf("%d",&side_length);
    printf("The area of square is %f\n",pow(side_length,2)); // pow takes double value
    return 0;
}