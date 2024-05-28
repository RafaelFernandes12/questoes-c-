#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, maior = 0, posicao; cin >> n;
    int valor[n];
    string name[n];

    for(int i = 0; i < n; i++) cin >> name[i] >> valor[i];

    for(int i = 0; i < n; i++){
        if(maior < valor[i]){
            maior = valor[i];
            posicao = i;
        }
    }
    cout << name[posicao] << "\n" << maior << endl;

    return 0;
}