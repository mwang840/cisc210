/* A variable x is already declared and initialized.
 * Fix the below code so it prints something like
 * "x is 29.0, sqrt(x) is 5.385 which is close to 5."
 * The values shown for x and sqrt(x) should have no
 * more than three decimal places, and the last number
 * should be shown with no decimal places.
 *
 * Note: when you compile this, include the flag '-lm' 
 * at the end of the compile line.
 */

#include <stdio.h>
#include <math.h> // used for sqrt

int main () {
    double x = 55;
    // Only make changes below. You can add or modify lines
    float sqrt_x=sqrt(x);
    int roundedNum = round(sqrt_x);
    printf("Square root of x is %0.3f which is close to %d.\n", sqrt_x, roundedNum);
    return 0;
}