#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, volume;
    const double PI = 3.14159;

    cout << "Enter radius: ";
    cin >> radius;

    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    cout << "Volume of sphere: " << volume << endl;
    return 0;
}