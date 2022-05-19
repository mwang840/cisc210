/* Consider the following code. 
 * Before you compile it, think about these questions:
 * Will it compile?
 * If not, why not?
 * If so, what will happen when it runs?
 * Try it: were you right?
 */

#include <stdio.h>
#include <math.h> // used for M_PI
#define M_PI 3.14287
const double SQUARED = 2.0;
const double pi = 22.0 / 7.0;

int main () {
	double pi=M_PI;
    printf("%c\n%d\n%e\n%f\n%i\n%o\n%u\n%x\n%%\n",
            pi,pi,pi,pi,pi,pi,pi,pi);

	return 0;
}