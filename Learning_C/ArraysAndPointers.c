#include <stdio.h>
//this says include the standard input and output libraries
#include <stdbool.h>
//this is for booleans
#include <string.h>
//for string functions

int main()
{



    //arrays
    //normal java array
    //when you get sizeof you get the byte size so each item and it depends times the # of items
    // so you have to use a formula to get the byte size of one item and then divide it by the total byte size
    //you can do mulitdimentional arrays by default
    int matrix[2][3] = {{1,2,3},{4,5,6}};
    printf("%d\n",matrix[0][2]);
    //you go which row then columm so you need a nested loop to go through a 2d matrix

    //intput scanf()
    //you use the same format as the print statement to save a certain item as a certain type
    //you can do multiple at the same time like print and the place were you put your variable is where you set their value
    //for strings your have to set the array length ahead of time meaning you have to make the vairable before hand
    //There are multiple ways to get an input
    printf("Hello, What is your name?:");
    fflush(stdout);
    char character[30];
    scanf("%s",&character);


    //C Memory Address
    /*there are ways to access memory in C
    if you use & before the name of a veriable that means that it is a reference to where they are stored in memory
    and %p gives you the pointer or something that gives you the memory address of the value as its value
    adding a & infront of a variable will give you the memory address*/

    //Pointers
    /*you use int* to make a pointer of a int variable. * is the thing that you use to make a pointer
    this means that this references the variable itself not what it holds. You can reverse the this by
    putting * infront of your pointer to get the value of the variable.*/
    //You can say %p for pointer and you can just put with the & to get the memory address
    //in an array if you don't cycle through or don't specify you will get the memory adress of the first item

    //pointer arithemtic
    /*So each pointer has a number or memory address that they are assigned. When you add a 1 to a pointer of a certain value
    they get increased by the amount of bytes that type of object would be. You can go through an array by doing this.*/
    //You can make a pointer to a pointer. You can then use ** on your pointer of your pointer to get to the actual value

    return 0;
    /* since the function is looking for an int output you use this as the exit
    it will end the fucntion through this */
}