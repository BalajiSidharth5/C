#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
    printf("I have picked a number between 0 and 20 for you to guess. Good luck!\n");
    
    srand(time(0));
    
    int num = (rand() % 20) + 1;
    int tries = 5;
    int entry;
    
    while(tries != 0){
        printf("you have %d tries.\n" , tries);
        printf("enter your guess: ");
       scanf("%d" , &entry);
        if(entry < num){
            printf("Nope! Your number is too low! Try again!\n");
        }
        if(entry > num){
            printf("Nope! Your number is too high! Try again!\n");
        }
        if(entry == num){
            printf("Correct!\n");
            break;
        }
        tries = tries - 1;
    }
    if(entry == num){
        return 0;
    }
    else{
    printf("Whoops! Out of tries! The number was %d", num);
    return 0;
    }
    
	
}
