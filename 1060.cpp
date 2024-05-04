#include <bits/stdc++.h>
using namespace std;

int main(){
    int b;
    b = 0;
    for (int i = 0; i < 6; i++){

        double a;
        cin >> a;

        if (a > 0){
            b++;
        }
    }
    cout << b << " valores positivos" << endl;

    return 0;
}