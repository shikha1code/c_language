#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sooty.txt","w");
    int num = 45;

    fprintf(ptr,"%d",num);
    fclose(ptr);
    //  write mode deletes written data in file sooty.txt
    // append basically keeps whatever data is stored in the file sooty.txt  

    return 0;
}