// WAP to Calculate area of circle, cylinder, Rectangle, cube by Function Overloading

#include <iostream>
using namespace std;

double area(double ardhabyas) {
    return (3.14 * ardhabyas * ardhabyas);  // Circle
}

float area(float ardhabyas, float uchai) {
    return (2 * 3.14f * ardhabyas * (uchai + ardhabyas));  // Cylinder
}

double area(double len, double brd) {
    return (len * brd);  // Rectangle
}

double area(int side) {
    return (6 * side * side);  // Cube
}

int main() {
    cout << "Circle: " << area(5.1) << endl;
    cout << "Cylinder: " << area(5.1f, 4.0f) << endl;
    cout << "Rectangle: " << area(50.0, 40.0) << endl;
    cout << "Cube: " << area(4) << endl;

    return 0;
}
