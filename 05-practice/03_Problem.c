#include <stdio.h>

float gravitationalforce(float mass);
float gravitationalforce(float mass){
float g=9.8;
return g*mass;
}

int main(){
    float mass = 5.6;
    
    gravitationalforce(5.6);
    printf("The gravitational force experienced by the mass m is %.2f\n",gravitationalforce(mass));

     return 0;

    }

    
    
    



