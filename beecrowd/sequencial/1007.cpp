#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    double b, c;
    cin >> a >> b >> c;
    double media = (b * c);

    cout << fixed << setprecision(2);

    cout << "NUMBER = " << a << endl;
    cout << "SALARY = " << "U$ "<< media << endl;
    return 0;
}
