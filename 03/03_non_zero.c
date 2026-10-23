#include <stdio.h>
// Non zero value is considered to be true statement.
int main(){
    int a = 10;
    if(1){
        printf("Try your best.\n");
    }
    if(5){
        printf("Dream big.\n");
    }
      if(0){
         printf("Work hard.\n") ; // since if has zero value , it will consider this as a false statement.
    }
if(2.4){
         printf("Keep it up.\n") ; 
    }
if('c'){
         printf("Improve yourself.\n") ; 
    }
    
    return 0;
}