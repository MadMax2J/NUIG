/*
Define a function called hypotenuse that calculates the length of the hypotenuse of a 
right triangle when the other two sides are given. Use this function in a program to 
determine the length of the hypotenuse for each of the following triangles. The function 
should take two arguments of type double and return the hypotenuse as a double.
*/

//Access C Standard Library
#include <stdio.h>
#include <math.h>

//Function prototype
double hypotenuse(double x, double y);

int main() {

	//Describe what this program does for the user...
	puts("This program calculates the length of the hypotenuse for three");
	puts("preprogrammed Right-angled Triangle examples.\n\n");

	//Triangle 1
	puts("For a Triangle with sides of 3.0 units and 4.0 units...");
	//Second parameter of printf is the returned value from the
	//hypotenuse function when passed the values 3.0 and 4.0...
	printf("The length of the Hypotenuse is: %5.1f units.\n\n", hypotenuse(3.0, 4.0));

	//Triangle 2
	puts("For a Triangle with sides of 5.0 units and 12.0 units...");
	//Second parameter of printf is the returned value from the
	//hypotenuse function when passed the values 5.0 and 12.0...
	printf("The length of the Hypotenuse is: %5.1f units.\n\n", hypotenuse(5.0, 12.0));
	
	//Triangle 3
	puts("For a Triangle with sides of 8.0 units and 15.0 units...");
	//Second parameter of printf is the returned value from the
	//hypotenuse function when passed the values 8.0 and 15.0...
	printf("The length of the Hypotenuse is: %5.1f units.\n\n", hypotenuse(8.0, 15.0));


	return(0);
}

/*hypotenuse (uses <math.h> from the Standard Library)
Calculates the length of the Hypotenuse of a Right-angled Triangle
when given the other two sides.

parameter sideX; The length of one side
parameter sideY; The length of the other side
return; Returns the length of the hypotenuse as a 'double' type.
*/
double hypotenuse(double sideX, double sideY) { 
	//Formula to calculate the length of the hypotenuse (hyp)
	//of a Right-angled Triangle is...
	//hyp = SquareRoot of (xSquared + ySquared)

	return sqrt(pow(sideX, 2) + pow(sideY, 2));

}