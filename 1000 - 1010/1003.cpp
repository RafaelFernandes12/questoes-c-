#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x;
    int y;
    cin >> x >> y;
    int soma = x + y;

    cout << fixed << setprecision(4);

    cout << "SOMA = " << soma << endl;
    return 0;
}
