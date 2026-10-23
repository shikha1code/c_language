#include <stdio.h>
void swap(int *x, int *y);
void  swap(int *x, int *y){

    int glow;
    glow = *x;
    *x = *y;
    *y = glow;

}
int main(){
    int x,y;
    printf("Enter two no:\n");
    scanf("%d %d",&x,&y);
    printf("Before swapping : x is %d,y is %d\n",x,y);
    swap(&x,&y);
    printf("After swapping : x is %d,y is %d\n",x,y);

    return 0;
}