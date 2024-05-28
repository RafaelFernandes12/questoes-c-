#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k; cin >> n >> k;
    int paradas[n], abastecimento[n];
    int metros = 0, ctn = 0;
    
    for(int i = 0; i < n; i++){
        cin >> paradas[i];
    }
    for(int i = 0; i < n; i++){
        cin >> abastecimento[i];
    }
    for(int i = 0; i < n; i++){
        if((k + metros) < paradas[i]){
            metros = paradas[i - 1];
            ctn++;
            k = abastecimento[i - 1];
            if((k + metros) < paradas[i]){
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << ctn << endl;
    return 0;
}