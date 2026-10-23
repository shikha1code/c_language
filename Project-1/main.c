// Make a game for "Guessing the correct random no."


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int random_no;

  random_no = rand() % 100 + 1; // FOr getting a random no within range of [1,100)

      printf("Random number = %d\n", random_no);
     int guessed_num;
     int no_of_guesses = 0;

     do{
          printf("Enter no:");
          scanf("%d",&guessed_num);
        
     if(guessed_num>random_no){
     
        printf("Lower the no please\n");
     }
     else if(guessed_num==random_no){
        printf("Bingo\n");
     }
     else if(guessed_num<random_no){
        printf("Increase the no please\n");
     }
     no_of_guesses++;
    }
     while (guessed_num != random_no);
     if(guessed_num == random_no){
    
        printf("You made a right guess in %d attempts\n",no_of_guesses);
     }
     
     
     

    return 0;
}