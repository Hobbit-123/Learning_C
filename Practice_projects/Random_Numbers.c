#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randNumGen(){
    int r = rand() % 101; /*you have to give it a number that it is going up to(exclusive)*/
    return r;
}

int main(){
    srand(time(NULL));
    printf("Guess a number between 0 and 100: ");
    fflush(stdout);
    int guess = 0;
    scanf("%d",&guess/*C wants the address remember that!!!!*/);
    int randint = randNumGen();
    if(guess == randint){
        printf("You got it!!!");
        printf("%d",randint);
    }
    else{
        printf("Nice try but not quite\n");
        printf("%d",randint);
    }
}