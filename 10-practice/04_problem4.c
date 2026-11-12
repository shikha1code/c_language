#include <stdio.h>

int main()
{
    FILE *ptr;
    char name1[56], name2[45];
    int salary1, salary2;
    ptr = fopen("salary.txt", "w");

    printf("Enter the name of employee 1\n");
    scanf("%s", name1);
    printf("Enter the salary of employee 1\n");
    scanf("%d", &salary1);

    printf("Enter the name of employee 2\n");
    scanf("%s", name2);
    printf("Enter the salary of employee 2\n");
    scanf("%d", &salary2);

    fprintf(ptr,"%s",name1);
    fprintf(ptr,"%c",',');
    fprintf(ptr,"%d",salary1);
    
    fprintf(ptr,"%c",'\n');

    fprintf(ptr,"%s",name2);
    fprintf(ptr,"%c",',');
    fprintf(ptr,"%d",salary2);
    return 0;
}