/* Carefully inspect the variable data types and see how 
 * they are used in the printf format string.
 * Notice the "plural". 
 * How do the modifiers work for showing the floating-point values?
 * See what happens when you reorder the variables in the printf, and
 * also try changing the format string.
 */

#include <stdio.h> // necessary for printf

int main () {
	int quantity = 9;
	float low = 0.82, high=0.91;
    char animal[]="horse", kind[]="Clydesdale";

    printf("Did you know that %d %s %ss weigh between %0.3f and %0.2f metric tons?\n",
            quantity, kind, animal, quantity*low, quantity*high);
	return 0;
}
