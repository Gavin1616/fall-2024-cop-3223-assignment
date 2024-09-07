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
        
        scanf("%d %d", &x1, &y1);
        scanf("%d %d", &x2, &y2);

        printf("Point #1 entered: x1 = %d; y1 = %d\n",x1, y1);
        printf("Point #2 entered: x2= %d: y2= %d\n", x2, y2);

        distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        printf("The distance between the two points is %.2f\n", distance);

        return distance;
    }
    distance_between_each_point()
    {
       
    }
double calculatePerimeter()
{
     int x1;
        int y1;
        int x2;
        int y2;
        scanf("%d %d", &x1, &y1);
        scanf("%d %d", &x2, &y2);

        printf("Point #1 entered: x1 = %d; y1 = %d\n",x1, y1);
        printf("Point #2 entered: x2= %d: y2= %d\n", x2, y2);

}
int main(int argc, char **argv)
{
    calculateDistance();
}