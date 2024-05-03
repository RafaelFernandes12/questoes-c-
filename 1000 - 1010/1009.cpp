#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string a;
    double b, c;
    cin >> a >> b >> c;
    double media = b + (c * 0.15);

    cout << fixed << setprecision(2);

    cout << "TOTAL = " << "R$ "<< media << endl;
    return 0;
}
