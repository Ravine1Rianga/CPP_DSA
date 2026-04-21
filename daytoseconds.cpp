#include <iostream>
using namespace std;

int main() {
    int days;

    cout << "Enter number of days: ";
    cin >> days;


    int seconds = days * 24 * 60 * 60;


    cout << "Number of seconds: " << seconds << endl;

    return 0;
}