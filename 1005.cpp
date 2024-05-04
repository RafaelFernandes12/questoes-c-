#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    double media = ((x * 3.5) + (y * 7.5)) / 11;

    cout << "MEDIA = " << fixed << setprecision(5) << media << endl;
    return 0;
}
