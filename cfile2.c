#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    float radius, x, y;

public:
    // Constructor to initialize circle
    Circle(float r, float x_center, float y_center) {
        radius = r;
        x = x_center;
        y = y_center;
    }

    // Method to compute area
    float area() {
        return 3.14159 * radius * radius;
    }

    // Method to check if point (x1, y1) is inside the circle
    bool isInside(float x1, float y1) {
        float dist = sqrt((x1 - x)(x1 - x) + (y1 - y)(y1 - y));
        return dist <= radius;
    }
};

int main() {
    float r, cx, cy, px, py;

    cout << "Enter radius and center (x y) of the circle: ";
    cin >> r >> cx >> cy;

    Circle c(r, cx, cy);

    cout << "Area of circle: " << c.area() << endl;

    cout << "Enter point coordinates to check (x y): ";
    cin >> px >> py;

    if (c.isInside(px, py))
        cout << "Point is inside the circle." << endl;
    else
        cout << "Point is outside the circle." << endl;

    return 0;
}
