#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, maior, menor, posicao;
    cin >> a;
    int b[a];

    for(int i = 0; i < a; i++){
        cin >> b[i];
        if(b[0] < b[i]){
            maior = b[i];
            posicao = i + 1;
            break;
        }
        else {
            posicao = -1;
        }
    }

    cout << posicao << endl;

    return 0;
}