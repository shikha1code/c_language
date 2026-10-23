#include <stdio.h>
void increment_10_times(float);

void increment_10_times(float a){
    a = a * 10;
    return;

}



int main(){
  float a = 5.6;
  
  printf("The value of a is %.1f\n",a);
  increment_10_times(a);
  printf("The value of a is %.1f\n",a);
    
    return 0;
}
// Note: This ia an example of pass by value which conveys the information that the value cannot be changed by "call by value". 
