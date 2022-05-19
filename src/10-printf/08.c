#include <stdio.h>
#include <math.h>
float aRadius = 40.5; /*Sets up radius and volume*/
float aVolume;
//Constant for a pi
const float PI = 3.14159265358979323846264338327950288419716939937510;

int main(){
    aVolume = (4.0/3.0) * PI * pow(aRadius, 3.0);
    printf("Volume of a sphere with a radius of %0.1f is %0.2f inches cubed.\n", aRadius, aVolume);
    return 0;
}