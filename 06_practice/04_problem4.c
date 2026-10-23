#include <stdio.h>
float increment_10_times(float*);
float increment_10_times(float* ptr){
    printf("The ten times of current value is %.0f\n",* ptr*10);
    return 4;

}

int main(){
  float a = 5.6;
  float* ptr = &a;
  increment_10_times(ptr);
    
    return 0;
}