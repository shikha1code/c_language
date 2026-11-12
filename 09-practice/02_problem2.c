#include <stdio.h>
typedef struct vector{
    float x;
    float y;
} V;
V sumVector(V v1 , V v2){
V v3;
v3.x = v1.x + v2.x;
v3.y = v1.y + v2.y;
return v3;
}
int main(){
    V v1;
    v1.x = 2.3;
    v1.y = 4.6;
    V v2 = { 4.5 , 5.4};
    printf(" vector v1 is %fi + %fj\n",v1.x,v1.y);
    printf(" vector v2 is %fi + %fj\n",v2.x,v2.y);
    V v3 = sumVector(v1,v2);
    printf(" vector v3 is %fi + %fj\n",v3.x,v3.y);

    
    return 0;
}