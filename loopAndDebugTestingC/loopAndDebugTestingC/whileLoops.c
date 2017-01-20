#include <stdio.h>

int main() {

	int grade;
	int count = 1;
	int total = 0;
	int average;

	while (count <= 10) {
		printf("What grade did student %d get: ", count);
		scanf("%d", &grade);

		total += grade;
		count++;
	}

	average = total / (count - 1);
	printf("The class average was %d%%.\n", average);




	return(0);
}