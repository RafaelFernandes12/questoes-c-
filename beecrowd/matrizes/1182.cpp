#include <bits/stdc++.h>
using namespace std;

int main(){

    double matriz[12][12], soma;
    int x;
    char letra;
    cin >> x;
    cin >> letra;

    cout << fixed << setprecision(1);
    for(int i = 0; i < 12; i++){
       for(int j = 0; j < 12; j++){
        cin >> matriz[i][j];
        }
    }
    for(int i = 0; i < 12; i++){
        soma += matriz[i][x];
    }
    if(letra == 'S'){
        cout << soma << endl;
    }
    if(letra == 'M'){
        soma = soma / 12.0;
        cout << soma << endl;
    }


    return 0;
}