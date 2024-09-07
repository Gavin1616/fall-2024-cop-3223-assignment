//********************************************************
// fracturing.c
// Author: Gavin Zieglar
// Class: COP 3223, Professor Parra
// //********************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159265

double distance_helper(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
double calculateDistance()
{
    int x1;
    int y1;
    int x2;
    int y2;
    double distance = 0;
        
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    printf("Point #1 entered: x1 = %d; y1 = %d\n",x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);

    distance = distance_helper(x1, y1, x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}
double calculatePerimeter()
{
    double distance = 0;
    double radius = 0;
    double perimeter = 0;
    int x1;
    int y1;
    int x2;
    int y2;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    printf("Point #1 entered: x1 = %d; y1 = %d\n",x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);
    distance = distance_helper(x1, y1, x2, y2);

    radius = distance/2;
    perimeter = 2 * PI * radius;
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return 3;
}
double calculateArea()
{
    double distance = 0;
    double radius = 0;
    double area = 0;
    int x1;
    int y1;
    int x2;
    int y2;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    printf("Point #1 entered: x1 = %d; y1 = %d\n",x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);

    distance = distance_helper(x1, y1, x2, y2);
    radius = distance/2;
    area = (PI * radius * radius);
    printf("The area of the city encompassed by your request is %.2f\n", area);

    return 2;
}
double calculateWidth()
{
    double width = 0;
    int x1;
    int y1;
    int x2;
    int y2;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    printf("Point #1 entered: x1 = %d; y1 = %d\n",x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);

    width = distance_helper(x1, y1, x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    return 1;
}
double calculateHeight()
{
    double height = 0;
    int x1;
    int y1;
    int x2;
    int y2;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    printf("Point #1 entered: x1 = %d; y1 = %d\n",x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);

    height = distance_helper(x1, y1, x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    return 1;
}   
int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
