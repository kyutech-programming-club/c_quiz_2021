#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void){
    float radius;

    float volume;

    printf("Enter the radius of the sphare: r = ");
    scanf("%f" , &radius);

     volume = (4.0/3) * M_PI * radius * radius * radius;
     printf("Volume of sphere: V = %.3f\n", volume);




}