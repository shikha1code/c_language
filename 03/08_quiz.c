/* #include <stdio.h>

int main(){
    float f;
    printf("Enter no:\n");
    scanf("%f",&f);


    if(f>90){
        printf("Your grade is A\n");
    }
    else if(f>80){
        printf("Your grade is B\n");
    }
    else if(f>70){
        printf("Your grade is C\n");
    }
    else if(f>60){
        printf("Your grade is D\n");
    }
    else if(f>50){
        printf("Your grade is E\n");
    }
    else{
        printf("Your grade is F\n");
    }
    return 0;
}
    */

    // Another Way

   #include <stdio.h>
   
   int main(){
    char grade;
    int marks = 95;
    
    if(marks<=100 && marks>=90){
        printf("grade = 'A'\n");
    }
    else if(marks<=90 && marks>=80){
        printf("grade = 'B'\n");
    
    }
    else if(marks<=80 && marks>=70){
       printf("grade = 'C'\n");
    }
    else if(marks<=70 && marks>=60){
        printf("grade = 'D'\n");
    }
    else if(marks<=60 && marks>=50){
        printf("grade = 'E'\n");
    }
    else{
        printf("grade = 'F'\n");
    }
    
    return 0;
   }