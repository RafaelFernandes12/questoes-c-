#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x, y, z;
    cin >> x >> y >> z;
    double media = ((x * 2) + (y * 3) + (z * 5)) / 10;

    cout << "MEDIA = " << fixed << setprecision(1) << media << endl;
    return 0;
}
