#include <bits/stdc++.h>
using namespace std;

int main(){

    double matriz[12][12], soma;
    int i, j = 1;
    char letra;
    cin >> letra;

    cout << fixed << setprecision(1);
    for(int i = 0; i < 12; i++){
       for(int j = 0; j < 12; j++){
            cin >> matriz[i][j];
        }
    }
    
    for(i = 0; i < 11; i++){
        for(j; j < 12; j++){
            soma += matriz[i][j];
        }
        j = i + 2;
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