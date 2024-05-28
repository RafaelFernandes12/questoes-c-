#include <bits/stdc++.h>
using namespace std;

int main(){

    int n[20], j = 19, k,x;

    for (int i = 0; i < 20; i++){
        cin >> x;
        n[i] = x;
    }

    for (int i = 0; i < 10; i++){
        k = n[i];
        n[i] = n[j];
        n[j] = k;
        j--;
    }
    for (int i = 0; i < 20; i++){
        cout << "N[" << i << "] = "  << n[i] << endl;
    }

    return 0;
}