#include <stdio.h>
#include <math.h>

int main () {

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double Volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    Volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("The area of circle is: %.2lf\n", area);
    printf("The surfaceArea of a circle is: %.2lf\n",surfaceArea);
    printf("The volume of a circle is: %.2lf", Volume);
    
    return 0;
}