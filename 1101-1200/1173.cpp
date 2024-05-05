#include <bits/stdc++.h>
using namespace std;

int main(){

    int n[10], x, y = 0;

    cin >> x;
    n[0] = x;
    cout << "N[" << 0 << "] = "  << x << endl;
    for (int i = 1; i < sizeof(n) / 4; i++){

        n[i] = n[i -1] * 2;
        cout << "N[" << i << "] = "  << n[i] << endl;
    }

    return 0;
}