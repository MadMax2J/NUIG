/*
One interesting application of computers is drawing graphs and bar charts (sometimes called ?histograms?).
Write a program that first reads and stores five numbers (each between 1 and 30). 
Then, for each number read, your program should print a line containing that number of adjacent asterisks 
(e.g. for the number seven, it should print *******), so that it displays five rows of asterisks.

by John Byrne - 30th January 2017
*/


//Access to the Standard Library...
#include <stdio.h>

int main() {

	int num1, num2, num3, num4, num5;		//Declare my user input variables
	num1 = num2 = num3 = num4 = num5 = 0;	//Initialise all to ZERO.

	
	////////////////////////////////////////////////////////////////////////////
	////  Get user input...
	////////////////////////////////////////////////////////////////////////////
	int validNumberEntry = 0;	//ZERO == FALSE. We start without a valid series of numbers
	
	while (!validNumberEntry) {	//We're going to do this until we do have valid numbers...
		puts("Please enter 5 numbers between 1 and 30, separated with a space.");
		printf("%s", "Numbers: ");

		//Check the number of valid inputs read in by 'scanf'. This detects for chars etc.
		int numberOfInputs = scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
		
		//I should have 5 integer inputs that are between 1 and 30 in value.
		//What are my FAIL criteria...
		if (numberOfInputs != 5 ||
			num1 < 1 || num2 < 1 || num3 < 1 || num4 < 1 || num5 < 1 ||
			num1 > 30 || num2 > 30 || num3 > 30 || num4 > 30 || num5 > 30) 
		{
			//Input data was not good...
			puts("Invalid data entry!\n\n");	//Display error to user.
			
			//From... faq.cprogramming.com/cgi-bin/smartfaq.cgi?id=1043284385&answer=1043372399
			while (getchar() != '\n');			//Clear 'scanf' input buffer.
			
			num1 = num2 = num3 = num4 = num5 = 0;	//Reinitialise my variables.
		}
		else 
		{
			//Input data was good!!
			validNumberEntry = 1;	//Non-Zero == TRUE
		}
	}
	

	////////////////////////////////////////////////////////////////////////////
	//  Generate bar graph for the user...
	////////////////////////////////////////////////////////////////////////////
	puts("\n\n\nBar graph of your number series...\n");
	
	//First bar
	printf("%2d |", num1);		//Bar label. Contains the number being represented.
	for (int count = 1; count <= num1; count++) {	//Repeat num(x) times...
		printf("%s", "*");							//Print an '*'
	}//End of for
	puts("");										//When finished this bar, next line.

	//Second bar
	printf("%2d |", num2);
	for (int count = 1; count <= num2; count++) {
		printf("%s", "*");
	}//End of for
	puts("");

	//Third bar
	printf("%2d |", num3);
	for (int count = 1; count <= num3; count++) {
		printf("%s", "*");
	}//End of for
	puts("");

	//Forth bar
	printf("%2d |", num4);
	for (int count = 1; count <= num4; count++) {
		printf("%s", "*");
	}//End of for
	puts("");

	//Fifth bar
	printf("%2d |", num5);
	for (int count = 1; count <= num5; count++) {
		printf("%s", "*");
	}//End of for
	puts("\n\n\n");
	
	return(0); //Assuming successful completion
}//End of main()