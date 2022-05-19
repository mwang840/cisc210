/* print the result of the following arithmetic operations */

#include <stdio.h>

int main() {
	int num1 = 2, num2 = 3;
	/* in a series of printf statements	
	add, subtract, multiply, and divide the two integers above
	use descriptive text within the printf statements 
	to explain each operation and the results */
    printf("Adding the two numbers gets you %d.\n", num1+num2);
    printf("Subtracting the two numbers will get you %d.\n", num1-num2);
    printf("Multiplying the two numbers will get you %d.\n", num1*num2);
    printf("Dividing the two numbers will get you %d since diving a int less by its dividen results in zero.\n", num1/num2);
}