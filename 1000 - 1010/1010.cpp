#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int code1, units1, code2, units2;
    float price1, price2;

    // Reading input
    cin >> code1 >> units1 >> price1;
    cin >> code2 >> units2 >> price2;

    // Calculating total amount
    float total = (units1 * price1) + (units2 * price2);

    // Setting precision for output
    cout << fixed << setprecision(2);

    // Printing the result
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}
