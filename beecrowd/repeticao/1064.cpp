#include <bits/stdc++.h>
using namespace std;

int main(){
    int b;
    double a, soma,media;
    b = 0;
    for (int i = 0; i < 6; i++){

        cin >> a;

        if (a > 0){
            b++;
            soma += a;
            media = soma / b;
        }
    }
    cout << b << " valores positivos" << endl;
    cout << fixed<< setprecision(1) <<  media << endl;
    return 0;
}