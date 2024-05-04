#include <bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c, resultado1, resultado2, delta;
    cin >> a >> b >> c ;
    delta = sqrt((b*b) - 4*a*c);
    resultado1 = ((-b + delta) / (2*a));
    resultado2 = ((-b - delta) / (2*a));
    
    cout << fixed << setprecision(5);

    if (a == 0 || isnanl(delta)) {
        cout << "Impossivel calcular" << endl;
    }
    else{
        cout << "R1 = " << resultado1 << endl;
        cout << "R2 = " << resultado2 << endl;
    }

    return 0;
}