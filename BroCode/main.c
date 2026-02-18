#include <stdio.h>

int main(){

	//These are print statements :)
	printf("I Like pizza!\n");
	printf("It's really good!");
	
	/*Variable = A reusable container for a value.
			Behaves as if it were the value in contains*/
	
	int age = 25;
	int year = 2025;
	int quantity = 1;

	//For Print you have to use format specifier
	printf("You are %d years old\n", age);
	// the d means decimal
	printf("The year is %d\n", year);
	//you have to add the new line character after each line
	printf("You have ordered %d x times\n", quantity);

	//for decimal numbers
	float gpa = 2.5;
	float price = 19.99;
	float temperature = -10.1;
	//For float you can only store 6 digits after the deciaml


	printf("Your gpa is %f\n",gpa);
	//f means float
	printf("Your gpa is %.1f\n",gpa);
	//the .1 tells the program how many digits to display after the decimal
	printf("The price is $%.2f\n",price);
	printf("The temperature is %.1f C\n",temperature);

	double pi = 3.14159265358979;
	//In a double you can store 15 to 16 dgits after the decimal
	
	printf("The value of p is %.15lf\n",pi);
	//lf means long float

	/*Characters*/
	char grade = 'A';
	char symbol = '!';
	char currency = '$';


	printf("Your grade is %c\n",grade);
	//c means character
	printf("Your favorite symbol is %c\n",symbol);
	printf("The currency is %c\n",currency);

	/* Strings */
	
	//Your store strings in array
	char name[] = "Bro Code";
	printf("Hello %s\n",name);

	return 0;
}
