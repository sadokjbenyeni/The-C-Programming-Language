#include <stdio.h>

#define LOWER 0   /* lower limnit of temperature*/
#define UPPER 300 /* upper limnit of temperature*/
#define STEP 20   /* step size */

float fahr_to_celsius(float fahr);

/* print Fahrenheit-Celsius table*/
int main(void)
{
    float fahr;
    float celsius;
    printf("Celsius\tFahrenheit\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        celsius = fahr_to_celsius(fahr);
        printf("%4.0f\t%6.1f\n", fahr, celsius);
    }
    return 0;
}

float fahr_to_celsius(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32);
}
