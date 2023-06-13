#include <stdio.h>

#define LOWER 0   /* lower limnit of temperature*/
#define UPPER 300 /* upper limnit of temperature*/
#define STEP 20   /* step size */

/* print Fahrenheit-Celsius table*/
int main(void)
{
    float fahr;
    printf("Celsius\tFahrenheit\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%4.0f\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    return 0;
}
