#include <stdio.h>
#include <math.h>

int main() {
    float height;
    float length;
    float hipotenuse;
    printf ("please enter height: ");
    scanf ("%f", &height);
    printf ("please enter length: ");
    scanf ("%f", &length);

    hipotenuse = sqrt(height*height + length*length);
    printf("hipotenuse = %f", hipotenuse);
    return 0;
}
