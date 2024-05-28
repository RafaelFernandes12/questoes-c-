#include <bits/stdc++.h>
using namespace std;

int main(){

    double n[100];

    cout << fixed << setprecision(1);
    for (int i = 0; i < sizeof(n) / 8; i++){
        cin >> n[i];
        if(n[i] <= 10){
            cout << "A[" << i << "] = "  << n[i] << endl;
        }

    }

    return 0;
}