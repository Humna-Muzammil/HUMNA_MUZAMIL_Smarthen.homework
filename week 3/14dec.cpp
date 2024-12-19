#include <iostream>
using namespace std;

float pyramidVolume(float length, float width, float height) {
    return (length * width * height) / 3.0;
}

void printVolume(float volume, string unit) {
    cout << volume << " cubic " << unit << endl;
}

int main() {
    float length, width, height;
    string unit;

    cout << "Enter the length : ";
    cin >> length;

    cout << "Enter the width : ";
    cin >> width;

    cout << "Enter the height : ";
    cin >> height;

    cout << "Enter the unit (mm, cms, ms, kms): ";
    cin >> unit;

    float volume = pyramidVolume(length, width, height);

    if (unit == "mm") {
        volume *= 1000000000.0;
    } else if (unit == "cm") {
        volume *= 1000000.0;
    } else if (unit == "km") {
        volume /= 1000000000.0;
    }

    printVolume(volume, unit);

    return 0;
}