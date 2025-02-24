/* Wap to compute the volume of a sphere
 * radius = 10 meter
 * Formula= 4/3 x Pie x r^2
*/
#include <stdio.h>
#define pie (3.14159)

int main()
{
    float volume = ((4.0f/3.0f) * pie * 10 * 10);
    printf("Volume (in meter cube): %f\n", volume);
    return 0;
}