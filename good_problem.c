#include <stdio.h>
int main(void) {
int choice, n;
do {
printf("\n1. Check even/odd\n2. Square\n3. Exit\n");
printf("Enter choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter integer: ");
scanf("%d", &n);
if (n % 2 == 0) printf("Even\n");
else printf("Odd\n");
break;
case 2:
printf("Enter integer: ");
scanf("%d", &n);
printf("Square = %lld\n", (long long)n * n);
break;
case 3:
printf("Exiting...\n");
break;
default:
printf("Invalid choice\n");
}
} while (choice != 3);
return 0;
}