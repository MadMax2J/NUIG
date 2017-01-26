/*
The process of finding the largest number (i.e., the maximum of a group of numbers) 
is used frequently in computer applications. For example, a program that determines 
the winner of a sales contest would input the number of units sold by each 
salesperson. The salesperson who sold the most units wins the contest. 

Write a pseudocode program and then a program that inputs a series of 10 numbers 
and determines and prints the largest of the numbers.

Hint: Your program should use three variables as follows:
counter: A counter to count to 10 (i.e., to keep track of how many numbers have 
         been input and to determine when all 10 numbers have been processed)
number: The current number input to the program
largest: The largest number found so far

by John Byrne
*/

/* Pseudocode...
Declare and Initialise variables.
counter = 1
number = 0
largest = (a very small number)

while counter is less than or equal to 10
	Ask user to input a 'number'
	if the 'number' > 'largest', then largest = number
	increment counter

Print the 'largest' number
*/

#include <stdio.h> //Gain access to Standard Library functions.

int main() {

	//Declare and initialize my variables...
	unsigned int counter = 1;	//A counter to count to 10. 
								//'unsigned' because it'll always be +ive.
	int number = 0;		//This will hold the most recent number input by the user.

	//Don't need to initialise 'largest' as this will be explicitly assigned 
	//during the execution of the program.
	//Also, if I was to initialize to ZERO, what if all user input values were -ive?
	int largest;		
						

	//User instructions...
	puts("Please Enter 10 numbers and I'll tell you which was the largest...");

	while(counter <= 10) { //Need to do this 10 times.
		//Prompt for each number to be entered...
		//Uses a Post-increment operator to update counter after it's used.
		printf("Number %2d: ", counter++); 
		
		//Assign the input value to the 'number' variable.
		scanf("%d", &number); 
	
		//I need to initialize variable 'largest' during the first pass
		if (counter == 2) { 
			largest = number;
		}
		//For every other pass, I just want to check if the new 'number' is 
		//greater than the current 'largest' and update as necessary...
		else if (number > largest) {	
			largest = number;
		}

	} //Jump back to loop condition
	
	//Output final result to user...
	printf("\nThe Largest number you entered was: %d.\n\n", largest);
	

	return(0);
}