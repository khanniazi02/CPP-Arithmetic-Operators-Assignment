#include <iostream>
using namespace std;

int main() {
    float length, width, height;
    float volume, capacity;

    cout << "Enter tank length (meters): ";
    cin >> length;

    cout << "Enter tank width (meters): ";
    cin >> width;

    cout << "Enter tank height (meters): ";
    cin >> height;

    volume = length * width * height;

    capacity = volume * 1000;

    cout << "Tank Volume = " << volume << " Cubic Meters" << endl;
    cout << "Tank Capacity = " << capacity << " Litres";

    return 0;
}
