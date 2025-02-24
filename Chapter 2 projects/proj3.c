#include <stdio.h>
#define pie (3.14159)

int main()
{
    int radius;
    printf("Enter Radius of circle in whole number: ");
    scanf("%d", &radius);
    float volume = ((4.0f/3.0f) *  pie  * radius * radius);
    printf("Volume (in meter cube): %.0f\n", volume);
    return 0;
}