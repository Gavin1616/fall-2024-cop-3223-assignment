//********************************************************
// fracturing.c
// Author: Gavin Zieglar
// Class: COP 3223, Professor Parra
// //********************************************************
#include <stdio.h>
#include <math.h>
double calculateDistance()
    {
        int x1;
        int y1;
        int x2;
        int y2;
        double distance = 0;
        
        printf("Point #1 entered: x1 = %d; y1 = %d\n",x1, y1);
        scanf("%d %d", &x1, &y1);
        scanf("%d %d", &x2, &y2);
        printf("Point #2 entered: x2= %d: y2= %d\n", x2, y2);

        distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

        return distance;
    }
double calculatePerimeter()
{
    double perimeter_side = 0;
    double perimeter_total = 0;
    perimeter_side = calculateDistance();
    perimeter_total = perimeter_side * 4;
    printf("The Perimeter is: %.2f\n", perimeter_total);
}
int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
}