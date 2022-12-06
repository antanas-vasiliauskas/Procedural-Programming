#include <stdio.h>

typedef struct Point{
    double x, y;
} Point;

void printPoint(Point p){
    printf("(%.2lf, %.2lf)\n", p.x, p.y);
}

Point createPoint(double x, double y){
    Point p = {x,y};
    return p;
}

double getDistance(Point p1, Point p2){
    return sqrt(pow(p1.x-p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main(){
    printf("%lf", getDistance(createPoint(2.0, -3.0), createPoint(-4.0, 5.0) ) );
}
