#include <stdio.h>
float c2f(float c);
float c2f(float c){
    return (c*9/5.0)+32 ;                                                                              
}


int main(){
    float t,c;
    t = (c*9/5.0)+32;

    c2f(54);
    printf("The farhenheit scale is %f\n",t);
    
    return 0;
}