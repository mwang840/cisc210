#include <stdio.h>
float temp_f = 55.2;     /* degrees fahrenheit */
float temp_c;     /* degrees centigrade */

int main(){
    temp_c = temp_f - 32 * (5.0/9.0);
    printf("The temperature in farenheit is %0.1f degrees and in centegrade is %0.1f\n degrees", temp_f, temp_c);
    return 0;
}