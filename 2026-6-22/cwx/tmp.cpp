#include <math.h>
#include <stdio.h>

struct Student {
    char name[20];
    int  score;
};

struct Mouse {
    char product_company[20];
    int  lmd;
};

struct Head {
    int face;
    int nose;
};

struct Person {
    Head head;
    int  body;
    int  legs;
};

struct Point2D {
    int x;
    int y;
};

double pow2(double x) { return x * x; }

double Distance(Point2D p1, Point2D p2) {
    double delta_x = abs(p1.x - p2.x);
    double delta_y = abs(p1.y - p2.y);
    return sqrt(pow2(delta_x) + pow2(delta_y));
}

void func() { Student c; }

int main() {
    Point2D p1 = {0, 1};
    Point2D p2 = {1, 2};
    printf("%lf", Distance(p1, p2));
    return 0;
}