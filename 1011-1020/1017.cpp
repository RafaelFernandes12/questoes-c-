#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b ;

    c = (a * b) / 12;

    cout << fixed << setprecision(3);

    cout << c <<endl;
    
    return 0;
}
