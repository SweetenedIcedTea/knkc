#include <stdio.h>
#define CONST (4.0f/3.0f)

int main(){
    int r = 10;
    float volume = 3.14159 * r * r * r;
    printf("Volume of sphere with radius 10m: %f m^3\n", volume);
}