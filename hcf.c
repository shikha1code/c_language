/* #include <stdio.h>

int hcf(int a , int b){
    int ans = 1;
    int min = b;
    if(a < b){
         min = a;
    }
    
    for (int i = 1; i <= min; i++)
        {
            if(a%i == 0 && b%i == 0){
               
                ans = i;
            }
        }
    return ans;
    
}

int main(){
    int a , b;
    scanf("%d %d\n",&a ,&b);
    int ans = hcf(a , b);
    printf("%d",ans);
    return 0;
}
    */
#include <stdio.h>

int hcf(int a , int b){
    int ans = 0;
    while(1){
        if(a < b) {
           int temp;
           temp = a;
           a = b;
           b = temp;
        }
        if(b == 0){
            ans = a;
            break;
        }
        a %= b;
    }
    return ans;
}

int main(){
    int a , b;
    scanf("%d %d",&a, &b);
    int ans = hcf(a,b);
    printf("%d",ans);
    return 0;
}   