#include <stdio.h>
#include <math.h>
void main() {

    double a, b, c, perimeter, s, area;
    printf("\nPlease enter three sides of triangle \n");
    scanf("%lf", &a);
    printf("Side 1 is %lf\n", a);
    scanf("%lf", &b);
      printf("Side 2 is %lf\n", b);
    scanf("%lf", &c);
        printf("Side 3 is %lf\n", c);
    perimeter=a+b+c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n the perimeter of a triangle is %lf \n", perimeter);
    printf("\n the area of triangle is %lf \n", area);
    return 0;
}
