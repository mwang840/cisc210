
/* write a file that prints the information stored in the variables below */

#include <stdio.h> // necessary for printf

int main () {
	// variables
	int age = 20;
	float height = 5.9;
	int year = 1;
	int zip = 19711;

	// introduce each variable with descriptive text and then print it below
	printf("My age is %d\n My height is %0.2f inches\n I am %d years old\n My zip code is %d\n", age, height, year, zip);
	return 0;
}
