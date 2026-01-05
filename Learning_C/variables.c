#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
        //Output
    printf("I Like Dosa!\n");
    printf("Its really good");
    //prints a line without an exit character so like system.out.print()


    //Variables
    int num;
    num = 10;
    num = 12;
    
    
    //you can change the value like in java
    //you can do most of the things like java.
    //have to initiate like java
    char c = 'a';
    char name[] = "John";
    //you use arrays to form strings in c
    //There is an exit character that will make it so that the next special character is viewed as a quote
    // \' is an example where it only takes it in as a since quote
    printf("%zu\n",sizeof(name));
    //this prints the size of the string in bytes
    printf("%zu\n",strlen(name));
    //prints the length of the string

    int x =5, y=6, z=50;
    //you can assign multiple variables like this of the same type.
    printf("%d\n",x+y+z); //prints 61
    x = y = z = 50; //everything is now the same value
    float f = 35e3;
    printf("%f\n",f);
    //you can have scientific numbers as well.
    printf("%.1f\n",f);
    printf("%.2f\n",f);
    //you can see a certain number of decimal points

    /* each type occupies a certain amount of bits 
    2 or 4 bytes for integers
    4 bytes for float
    8 bytes for double
    1 byte for a character*/
    
    //There are more types apart from that but that is situational learn those later. %hd, %u, %ld, %lld, %lu, %llu, %lf

    //You can change any number into any other number value. and decimal will get cut off and you can to the (int) this in c


    printf("%d\n",num);
    //you have to tell the computer what type of thing it is printing.
    //%d or %i for int, %c for character, %f or %F for float, %lf for double.
    

    printf("My favorite number is: %d\n",num);
    printf("My favorite character is: %c\n",c);
    printf("My age is %d and I am a %c\n",num,c);
    // you can print multiple things at once by just adding them in the printf statement
    // floats are the smaller value between float and double, kind of like long

    printf("You can do this %d times\n",15);
    printf("%s\n",name);
    //you can also use this print values directly into the statement

    //Constants
    const int n = 15;
    //this sets it to that number and it cannot be changed no like final you also have to assign the value as you initialize
    //also use uppercase for constant variables its good practice

    //Operators
    // has +,-,*,/,%(mod),++,--
    /* has =,+=, -=, *=, /=, %=, &=(this is to work with pointers), |=(bitwise or/ you will learn later), 
    ^=(bitwise xor/exclusive or), >>=(bitwise right shift), <<=(bitwise left shift) */
    //Has comparisions like ==,!=,>,<,>=,<=
    //Logical operators &&(and), ||, !
    //C does follow order of operations

    //Booleans
    bool boolean = true;
    // you have to import using this statement. #include <stbool.h>
    //booleans cna be represented as a 1(true) or a 0(false)
    //you can use comparisons in the num part of the printf to get a 1 or 0 to get true or false

    return 0;
}