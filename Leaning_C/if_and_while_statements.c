#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
        //IF Statements
    if (/*condition*/ true){
        printf("true\n");
    } /*Else If Statements*/ else if(true)
    {
        printf("Yo");
    }/*Else statements*/ else {
        printf("Hello");
    } 

    //there is a short hand to write this.
    (10<18)?/*if time is less than 18*/printf("Good Day.\n"):(10>18)?/*else if*/printf("Yo"):/*else*/printf("Good evening");

    //Switches
    switch (/*if you give an int*/ 1){
    //goes through each of the cases from where you give it unless you make it break.
        case 1:
            printf("Yo\n");
            break; //break ends the code of that loop or special thing
        case 2:
            printf("No Yo\n");
            break;
        default: //It executes this code if nothing else matches.
            printf("Hello\n");
    }

    //While Loops
    //Like the loops in java
    //Do While Loops like in java as well

    //for loops
    for(int i = 0; i<5; i++){
        printf("%d\n",i);
    }
    //same like java
    //nested loops like java

    //continue will skip the rest of the code this itteration
    return 0;
}