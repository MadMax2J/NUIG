/*
The factorial of a non-negative integer n, written as n!, is a mathematical calculation that 
is the product of all positive integers less than or equal to n. The calculation of 
factorials is one of the example of the use of recursion.  

The calculation can be written as
n! = n * (n-1) * (n-2) * ... 1
where 1! = 1, and 0! is defined to be 1 as well.

In this exercise, you will be using factorials to calculate a mathematical series.  Perform 
the following steps for this exercise:
1.  One of the tenets of modern Software Engineering is code reuse.
    There are many instances of functions that implement the factorial schema on the Internet.  
    Locate a recursive instance, code it and test it.

2.  Use the factorial function to calculate the series:
    e = 1/0! + 1/1! + 1/2! + 1/3! + ... for 20 terms.

3.  Write the same series calculation using an iterative loop of your choice.

4.  Instrument your code to measure time for the recursive and iterative loop methods to 
    calculate the first 20 terms of the series.

5.  Present your timing results.

6.  Based on your timing results, comment on the quote: 
    ”Would any of you very experienced programmers, if asked to code an iterative 
	loop (like a mathematical series), think of using recursion or would that be a 
	‘mistake’ that a rookie programmer would leap to?”
*/

//Access C Standard Library
#include <stdio.h>
#include <time.h>

//Define my constants
#define TERMS 20	//The number of terms in the series to calculate.

//Declare my function prototypes
void welcome();				//A Welcome Message
void recursiveTest();		//The Recursive Function test
void iterativeTest();		//The Iterative Function test
void delay();				//A 'delay' function
unsigned long long int recursiveFactorial(unsigned int number);	//Recursive Factorial function
unsigned long long int iterativeFactorial(unsigned int number);	//Iterative Factorial function

//Simplified main() function
int main() {

	welcome();			//Display the Welcome Message
	
	recursiveTest();	//Perform the Recursive Function Test

	iterativeTest();	//Perform the Iterative Function Test

	return(0);			//Assuming program completed successfully

} //End of main()

/*welcome
Displays an introduction to the user, describing what this program will do.
*/
void welcome() {
	puts("Recursive vs. Iterative function performance comparison.\n");
	puts("This program calculates an approximate value for Euler's");
	puts("number with the equation...");
	printf("e = 1/0! + 1/1! + 1/2! + 1/3! + ... for %d terms.\n", TERMS);

	puts("In order to determine if a Recursive function or Iterative function performs");
	puts("better, we'll use the C Standard Library clock() function, to time the");
	puts("calculation of the factorial values, using both a Recursive function and");
	puts("an Iterative function. This data will then be presented to the user.\n\n");


	puts("WARNING - In testing, I've found that this program works a lot better");
	puts("on a system with a Linux host Operating System.\n\a");
	
	printf("%s", "Press ENTER key to Continue...");
	getchar();	//Causes program to pause until user hits the 'ENTER' key
	puts("\n\n");
}

/*recursiveTest
This function calculates the time it takes to calculate Euler's number 
using TERMS Factorial terms, calculated with a Recursive Factorial function call. 

We then output the calculated number and the time taken to complete the task.
*/
void recursiveTest() {
	long double eRecursive = 0.0;	//Result of Number Series to be calculated
	clock_t beforeTime, afterTime;	//Before process and After process time variables
	long double duration;			//Calculated duration of test variable

	//Start test...
	puts("Starting Euler's Number calculation via Recursive function...");
	beforeTime = clock();	//Record the current number of clock ticks since program launched

	//Calculate Euler's number via the formula...
	//    e = 1/0! + 1/1! + 1/2! + 1/3! + ... for declared constant 'TERMS' terms
	for (int count = 0; count <= TERMS; count++) {
		eRecursive += 1.0 / recursiveFactorial(count);
		delay();			//delay added to add slight pressure to high performance systems
	}//End of for

	afterTime = clock();	//Record the current number of clock ticks since program launched

	//Clock ticks 'After' minus Clock ticks 'Before' equals process duration.
	//Display duration in seconds, by dividing by the system constant 'CLOCKS_PER_SEC' from <time.h>
	duration = (long double)(afterTime - beforeTime) / CLOCKS_PER_SEC;
	
	//Output calculated figure and time taken... 
	printf("\te = %.14Lf\n", eRecursive);	//Found that we lose accuracy after 14dp
	printf("\tCalculation completed in a time of %Lf seconds\n\n", duration);
	
}//End of function recursiveTest()

/*iterativeTest
This function calculates the time it takes to calculate Euler's number
using TERMS Factorial terms, calculated with a Recursive Factorial function call.

We then output the calculated number and the time taken to complete the task.
*/
void iterativeTest() {
	long double eIterative = 0.0;	//Result of Number Series to be calculated	
	clock_t beforeTime, afterTime;	//Before process and After process time variables
	long double duration;			//Calculated duration of test variable

	//Start test...
	puts("Starting Euler's Number calculation via Iterative function...");
	beforeTime = clock();	//Record the current number of clock ticks since program launched

	//Calculate Euler's number via the formula...
	//    e = 1/0! + 1/1! + 1/2! + 1/3! + ... for declared constant 'TERMS' terms
	for (int count = 0; count <= TERMS; count++) {
		eIterative += 1.0 / iterativeFactorial(count);
		delay();			//delay added to add slight pressure to high performance systems
	}//End of for

	afterTime = clock();	//Record the current number of clock ticks since program launched

	//Clock ticks 'After' minus Clock ticks 'Before' equals process duration.
	//Display duration in seconds, by dividing by the system constant 'CLOCKS_PER_SEC' from <time.h>
	duration = (long double)(afterTime - beforeTime) / CLOCKS_PER_SEC;

	//Output calculated figure and time taken... 
	printf("\te = %.14Lf\n", eIterative);	//Found that we lose accuracy after 14dp
	printf("\tCalculation completed in a time of %Lf seconds\n\n", duration);

}//End of function iterativeTest()


//Requirement #1 - "Code Reuse"
//Taken from (Deitel. P, Deital. H, 2013)
// ** NOTE ** - Internal function comments are unchanged from source
//recursive definition of function factorial
unsigned long long int recursiveFactorial(unsigned int number)
{
	// base case
	if (number <= 1) {
		return 1;
	} // end if
	else { // recursive step
		return (number * recursiveFactorial(number - 1));
	} // end else
} // end function factorial

//Requirement #3 - "Iterative loop implementation"
/*iterativeFactorial
This function returns a factorial value using an Iterative loop

parameter n - The input value whose factorial is to be calculated. ie. 1!, 2! ... n!
return - a potentially very large integer value which is the factorial of the input parameter.
eg.		 5! = 120
		20! = 2432902008176640000
*/
unsigned long long int iterativeFactorial(unsigned int n)
{
	unsigned long long int factorial = 1;		//Initialise to 1 because 1 * x = x and 0 * x = 0
	for (int count = n; count >= 1; count--) {	//Start with 'count'; continue till count = 1
												// decrement 'count'
		factorial *= count;						//Increment factorial value with product of 'count'
	}
	return factorial;							//return the calculated factorial value.

}

/*delay
This function causes the computer to process an empty 'for' loop.
This function is required on some systems as it appears the Standard Library C count() function's 
resolution is system dependant. On some High Performance systems, calculating Euler's number
by itself, doesn't register with the count() function.
This function is called uniformly by both the Recursive and Iterative 'e' calculation loops.
*/
void delay() {
	for (int x = 0; x <= 5000000; x++); //Empty 'for' loop to cause a processing delay
}