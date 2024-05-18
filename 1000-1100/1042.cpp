#include <bits/stdc++.h>
using namespace std;

int main(){

    int x, maior = 0, vetor[3];


    for(int i = 0; i < 3; i++){
        cin >> x;
        vetor[i] = x;
    }
    for(int i = 0; i < 3; i++){
        if(vetor[i] > vetor[i-1]){
            vetor[i];
        }
    }
    for(int a: vetor){
        cout << a - 1;
    }

    return 0;
}