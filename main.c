#include <stdio.h>

#define pi 3.1415926535
/*volume of a sphere is 4/3pir*r*r*/
int main(int argc, char **argv){
    float volume, r;
    printf("Input radius of the sphere: ");
    scanf("%f", &r);
    printf("Radius of sphere is: %.2f\n", r);
    printf("Volume of sphere is: %.2f\n", (4.0/3.0) * pi * r*r*r);
    return 0;
}