/* When this program is run, the user will be required to
 * enter their name and the year they started college.
 * Add a line so the program outputs something like
 * "Hey NAME, you'll graduate in YEAR!"
 */

#include <stdio.h> // necessary for printf

int main () {
	int start=0;
    char name[256];
    scanf("%d",&start);
    scanf("%s",name);
    // add appropriate lines here. Assume 4 years to graduate.
    printf("Hey %s you will graduate in %p years", name, start);
	return 0;
}
