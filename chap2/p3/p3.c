#include <stdio.h>
#define CONST (4.0f/3.0f)

int main(){
    int r;
    printf("Enter radius of sphere in meters: ");
    scanf("%d", &r);
    float volume = 3.14159 * r * r * r;
    printf("Volume of sphere with radius %d m: %f m^3\n", r, volume);
    return 0;
}