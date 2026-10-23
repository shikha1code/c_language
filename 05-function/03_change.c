#include <stdio.h>
int change(int a); // misnomer

int change(int a){
    a=45;
    return a;

}



int main(){
    int b = 36;
    change(b);
    printf("b is %d\n",b);

  
    return 0;
}