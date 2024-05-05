#include <bits/stdc++.h>
using namespace std;

int main(){

    int n[10];

    for (int i = 0; i < sizeof(n) / 4; i++){
        cin >> n[i];
        if(n[i] <= 0){
            n[i] = 1;
        }
        cout << "X[" << i << "] = "  << n[i] << endl;
    }

    return 0;
}