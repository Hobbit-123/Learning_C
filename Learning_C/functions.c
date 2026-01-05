#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int x = 0;
//you can have global variables by having them hangout outisde of any functions.

char /*This means that it doesn't return anything*/ myFunction(const char name[5]/*This is a string*/){}
//you can seperate them so that you can initialize it before the main function and then write the code after the main function.

int main(){ // this is the declaraction of the function
    //It has the function's name, return type, and parameters (if any)

    //The main code is the definition: it has the code of the function

    // this is a function
    //you call it like you would call it in java
    char name[] = "John";
    myFunction(name);
    myFunction("Jenny");
    //since it takes in a string you can just put in a string. It depends on how the code is written
    //your function has to be declared before you use it. So where you use the code has to be below
    return 0;
}

char /*This means that it doesn't return anything*/ myFunction(char name[]/*This is a string*/){
    printf("My name is %s\n",name);
    //if you have an array has a parameter you have to know/set the length of it in the code.
    //returns behave normally like java
    //you can even save the return values in arrays like java.

    //be careful when I comes to the scope of variables as outside doesn't go inside inside doesn't go outside
}