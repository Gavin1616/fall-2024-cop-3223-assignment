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

double distance_between_x(int x1, int x2)
{
       return fabs((double)(x2 - x1));
}
double distance_between_y(int y1, int y2)
{
    return fabs((double)(y2 - y1));
}

double calculatePerimeter()
{
    double x_distance = 0;
    double y_distance = 0;
    double perimeter = 0;
    int x1;
    int y1;
    int x2;
    int y2;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    printf("Point #1 entered: x1 = %d; y1 = %d\n",x1, y1);
    printf("Point #2 entered: x2= %d: y2= %d\n", x2, y2);

    x_distance = distance_between_x(x1, x2);   
    y_distance = distance_between_y(y1, y2);

    perimeter = 2 * x_distance + 2 * y_distance;

    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

}
double calculateArea()
{
    double area = 0;
    double variable_x = 0;
    double variable_y = 0;

    int x1;
    int y1;
    int x2;
    int y2;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    printf("Point #1 entered: x1 = %d; y1 = %d\n",x1, y1);
    printf("Point #2 entered: x2= %d: y2= %d\n", x2, y2);


    variable_x = distance_between_x(x1, x2);   
    variable_y = distance_between_y(y1, y2);
    area = variable_x * variable_y;
    printf("The area of the city encompassed by your request is %.2f\n", area);

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
    printf("Point #2 entered: x2= %d: y2= %d\n", x2, y2);

    width = distance_between_x(x1, x2)

    printf("The width of the city encompassed by your request is %d", width);


}
int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
}
