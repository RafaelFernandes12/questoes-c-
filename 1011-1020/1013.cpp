#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a,b,c, maiorAb, maior;
    cin >> a >> b >> c;

    maiorAb = (a + b + abs(a - b)) / 2;

    if (c > maiorAb) {
        maior = c;
    } 
    else {
        maior = maiorAb;
    };

    cout << fixed << setprecision(3);

    cout << maior << " eh o maior" << endl;
    
    return 0;
}
