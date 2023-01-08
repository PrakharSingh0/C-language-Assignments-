#include <stdio.h>
#include <math.h> // Used for sqrt() function

int main()
{
    float side, area;

    /* Input side of equilateral triangle */
    printf("Enter side of an equilateral triangle: ");
    scanf("%f", &side);

    /* Calculate area of equilateral triangle */
    area = (sqrt(3) / 4) * (side * side);

    /* Print resultant area */
    printf("Area of equilateral triangle = %.2f sq. units", area);

    return 0;
}