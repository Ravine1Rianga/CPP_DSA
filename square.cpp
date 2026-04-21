#include <iostream>
using namespace std;

double calculateArea(double side) {
    return side * side;
}

double calculatePerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    cout << "Enter side length of square: ";
    cin >> side;

    double area = calculateArea(side);
    double perimeter = calculatePerimeter(side);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}