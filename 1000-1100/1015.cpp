#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, distancia;
    cin >> a >> b >> c >> d;

    distancia = sqrt(pow((c - a), 2) + pow((d - b), 2));

    cout << fixed << setprecision(4);

    cout << distancia << endl;
    
    return 0;
}
