/*
Write 'for' statements that print the following sequences of values:

a. 1, 2, 3, 4, 5, 6, 7
b. 3, 8, 13, 18, 23
c. 20, 14, 8, 2, -4, -10
d. 19, 27, 35, 43, 51


by John Byrne - 30th January 2017
*/

//Access the Standard Library
#include <stdio.h>

int main() {

	// Print group 'a.'
	printf("%s", "a. ");			//Group label
	for (int a = 1; a <= 7; a++) {	//Set-up 'for' loop to repeat 7 times
		printf("%5d", a);			//Print the value
	}								//End of for
	puts("\n");						//Separate next group with a new line
	//End of group 'a.'


	// Print group 'b.'
	printf("%s", "b. "); 
	for (int b = 3; b <= 23; b += 5) { //From 3 to 23, incrementing in jumps of 5
		printf("%5d", b);
	}	//End of for
	puts("\n");
	//End of group 'b.'

	
	// Print group 'c.'
	printf("%s", "c. ");
	for (int c = 20; c >= -10; c -= 6) { //From 20 to -10, decrementing in jumps of 6
		printf("%5d", c);
	}	//End of for
	puts("\n");
	//End of group 'c.'

	
	// Print group 'd.'
	printf("%s", "d. ");
	for (int d = 19; d <= 51; d += 8) {	//From 19 to 51, incrementing in jumps of 8
		printf("%5d", d);
	}	//End of for
	puts("\n");
	//End of group 'd.'


	return(0); //Assuming successful completion
} //End of main()