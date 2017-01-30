/*
One large chemical company pays its salespeople on a commission basis.
The salespeople receive $200 per week plus 9% of their gross sales for that week.
For example, a salesperson who sells $5000 worth of chemicals in a week receives
$200 plus 9% of $5000, or a total of $650.

This program will take as input, each salesperson's gross sales for last week and
will calculate and display that salesperson's earnings, processing one
salesperson's figures at a time.

By John Byrne
*/

#include <stdio.h> //Get access to Standard Library functions

int main() {
	float sales = 0; //Declare and initialise my variable

	//1st pass; Get input from the user. (Might be '-1' to start)
	printf("%s", "Enter sales in dollars (-1 to end): "); //Securely written printf.
	scanf("%f", &sales); //Read-in user input and assign the value to the sales variable.

	while (sales != -1) { //Check for continuation (not termination) condition
						  //Consider handling a negative sales figure input??

		printf("Salary is: $%.2f\n", 200 + (sales * 0.09)); //Display Salary based on commission.

															//Prompt user for another sales figure...
		printf("%s", "Enter sales in dollars (-1 to end): ");
		scanf("%f", &sales); //Read-in user input and assign the value to the sales variable.
	} //Jump back to the loop condition

	  //Upon successful completion of the program...
	return(0);
}