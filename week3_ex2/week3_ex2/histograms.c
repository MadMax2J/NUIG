/*
One interesting application of computers is drawing graphs 
and bar charts (sometimes called ?histograms?).
Write a program that first reads and stores five numbers 
(each between 1 and 30). 
Then, for each number read, your program should print a 
line containing that number of adjacent asterisks 
(e.g. for the number seven, it should print *******), so 
that it displays five rows of asterisks.

*/

/*
Pseudocode

*/

#include <stdio.h>

int main() {

	int num1, num2, num3, num4, num5;		//Declare my user input variables
	num1 = num2 = num3 = num4 = num5 = 0;	//Initialise all to ZERO.
	int numberOfInputs;

	//Get user input
	puts("Please enter 5 numbers between 1 and 30, separated with a space.");
	printf("%s", "Numbers: ");
	
	numberOfInputs = scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
			//Might add some input validation here
	if (numberOfInputs != 5 || 
		num1 < 1 || num2 < 1 || num3 < 1 || num4 < 1 || num5 < 1 || 
		num1 > 30 || num2 > 30 || num3 > 30 || num4 > 30 || num5 > 30){

		puts("Invalid data entry!");
	}
	else {

		puts("");

		printf("%2d |", num1);
		for (int count = 1; count <= num1; count++) {
			printf("%s", "*");
		}
		puts("");

		printf("%2d |", num2);
		for (int count = 1; count <= num2; count++) {
			printf("%s", "*");
		}
		puts("");

		printf("%2d |", num3);
		for (int count = 1; count <= num3; count++) {
			printf("%s", "*");
		}
		puts("");

		printf("%2d |", num4);
		for (int count = 1; count <= num4; count++) {
			printf("%s", "*");
		}
		puts("");

		printf("%2d |", num5);
		for (int count = 1; count <= num5; count++) {
			printf("%s", "*");
		}
		puts("");
	}





	return(0); //Assuming successful completion
}//End of main()