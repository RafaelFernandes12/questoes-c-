#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a,b,c;
    cin >> a >> b >> c;

    double area1 = (a * c) / 2;
    double area2 = c * c * 3.14159;
    double area3 = ((a + b) * c) / 2;
    double area4 = b*b;
    double area5 = a * b;

    cout << fixed << setprecision(3);

    cout << "TRIANGULO: " << area1 << endl;
    cout << "CIRCULO: " << area2 << endl;
    cout << "TRAPEZIO: " << area3 << endl;
    cout << "QUADRADO: " << area4 << endl;
    cout << "RETANGULO: " << area5 << endl;
    return 0;
}
