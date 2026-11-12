#include <stdio.h>
struct vector{
    float x;
    float y;
};

int main(){
    struct vector v1;
    v1.x = 2.3;
    v1.y = 4.6;
    // struct vector v1 = { 2.3 , 5.6};
    printf(" vector is %fi + %fj\n",v1.x,v1.y);
    
    return 0;
}