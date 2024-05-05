#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x;
    double r = 3.14159;
    cin >> x;
    double area = (4.0/3) * r * pow(x,3);

    cout << fixed << setprecision(3);

    cout << "VOLUME = " << area << endl;
    return 0;
}
