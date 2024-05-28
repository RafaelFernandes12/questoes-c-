#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, entrada, menor, posicao;

    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> entrada;
        arr[i] = entrada;
    }
    for(int i = 0; i < n; i++){
        if(arr[i] < menor){
            menor = arr[i];
            posicao = i;
        }
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;


    return 0;
}