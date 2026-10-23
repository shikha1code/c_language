#include <stdio.h>

int main(){
    int num;
    printf("Enter no.\n");
    scanf("%d",&num);


    int not_prime = 0;
    
    if(num==1 && num==0){
        not_prime=1;
    }
    for (int i = 2; i < num; i++)
    {
        
       if (num%i==0 && num!=2)
       {
        not_prime = 1;
        break;
       }
        
    }

if (not_prime)
{
    printf("%d is not prime\n",num);
}
else
{
    printf("%d is prime \n",num);
}

    return 0;
}