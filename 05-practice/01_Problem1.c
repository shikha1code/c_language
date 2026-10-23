#include <stdio.h>
float average(int x,int y,int z);
float average(int x,int y,int z){
    return (x+y+z)/3.0; // int/float = float
}


int main(){
   float Average = average(1,2,1);
   printf("The average of 3 numbers is %f\n",Average);

    
    return 0;
}