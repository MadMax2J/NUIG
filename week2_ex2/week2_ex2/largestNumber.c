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
largest = 0

while counter <= 10
	Ask user to input a sales 'number'
	if the 'number' > 'largest', then largest = number
	increment counter

Print the 'largest' number
*/

#include <stdio.h> //Gain access to Standard Library functions.

int main() {

	int counter = 1;	//A counter to count to 10 (i.e. 10 numbers have been processed)
	int number = 0;		//Most recent number input by the user.
	int largest = -999;	//The largest number input by the user so far.

	//User instructions...
	puts("Please Enter 10 numbers and I'll tell you which was the largest...");

	while(counter <= 10) { //Need to do this 10 times.
		//Prompt for each number to be entered...
		//Uses a Post-increment operator to update counter after it's used.
		printf("Number %d: ", counter++); 
		
		//Assign the input value to the 'number' variable.
		scanf("%d", &number); 

		//1-line if statement to check if the new 'number' is greater then the 
		//current 'largest' and update as necessary...
		if (number > largest) largest = number; 
	} //Jump back to loop condition
	
	//Output final result to user...
	printf("\nThe Largest number you entered was: %d.\n\n", largest);
	

	return(0);
}