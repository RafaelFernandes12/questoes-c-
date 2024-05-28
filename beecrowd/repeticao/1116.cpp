#include <bits/stdc++.h>
using namespace std;

int main(){

    double x, y, divisao;
    int n;

    cin >> n;

    cout << fixed << setprecision(1);

    while (n--){
        cin >> x >> y;
        double(divisao) = double(x) / double(y);
        if(y == 0){
            cout << "divisao impossivel" << endl;
        }
        else{
            cout << divisao << endl;
        }
    }

    return 0;
}