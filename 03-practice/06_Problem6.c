#include <stdio.h>

int main(){
    int num1,num2,num3,num4;
    scanf("%d",& num1);
    scanf("%d",& num2);
    scanf("%d",& num3);
    scanf("%d",& num4);
    printf("The numbers are %d ,%d,%d and %d \n",num1,num2,num3,num4);
     if(num1>num2&&num1>num3&&num1>num4){
        printf("The greatest integer is %d\n",num1);
     }

     else if(num2>num1&&num2>num3&&num2>num4){
        printf("The greatest integer is %d\n",num2);
     }
     else if(num3>num1&&num3>num2&&num3>num4){
        printf("The greatest integer is %d\n",num3);
     }
     else{
        printf("The greatest integer is%d\n",num4);
     }


    return 0;
}