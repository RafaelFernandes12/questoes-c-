#include <bits/stdc++.h>
using namespace std;

int main(){

    double matriz[12][12], soma;
    int i, x = 11;
    char letra;
    cin >> letra;

    cout << fixed << setprecision(1);
    for(int i = 0; i < 12; i++){
       for(int j = 0; j < 12; j++){
            cin >> matriz[i][j];
        }
    }
    
    for(i = 1; i < 12; i++){
        for(int j = x; j < 12; j++){
            soma += matriz[i][j];
        }
        x--;
    }
    if(letra == 'S'){
        cout << soma << endl;
    }
    if(letra == 'M'){
        soma = soma / 66.0;
        cout << soma << endl;
    }


    return 0;
}