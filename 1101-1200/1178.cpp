#include <bits/stdc++.h>
using namespace std;

int main(){

    double n, v[100], j = 0;

    cin >> n;
    cout << fixed << setprecision(4);

    for (int i = 0; i < sizeof(v) / 8; i++){
        
        v[i] = n ;
        cout << "N[" << i << "] = "  << v[i] << endl;
        n /= 2;

    }

    return 0;
}