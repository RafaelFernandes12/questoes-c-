#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a;
    double b;
    cin >> a >> b;

    cout << fixed << setprecision(3);

    cout << a / b << " km/l" << endl;
    
    return 0;
}
