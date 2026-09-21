#include <stdio.h>
#include <math.h>

int main()
{

    double radius = 0.0;
    double circumference = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159265358979323846;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Circle Circumference: %.2lf\n", circumference);
    printf("Circle Area: %.2lf\n", area);
    printf("Sphere Surface Area: %.2lf\n", surfaceArea);
    printf("Sphere Volume: %.2lf\n", volume);

    return 0;
}