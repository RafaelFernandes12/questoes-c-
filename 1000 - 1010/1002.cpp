#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x;
    double r = 3.14159;
    cin >> x;
    double area = r * x*x;

    cout << fixed << setprecision(4);

    cout << "A=" << double(area * 100) / 100 << endl;
    return 0;
}
