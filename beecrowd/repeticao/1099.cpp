#include <bits/stdc++.h>
using namespace std;

int main(){

    int x,y,soma, n;
    cin >> n;
    for (int j = 0; j < n; j++){
        cin >> x >> y;
        soma = 0;
        if (x > y){
            for (int i = y + 1; i < x; i++){
                if (i % 2 != 0){
                    soma = soma + i;
                }
            }
            cout << soma << endl;
        }
        else {
            for (int i = x + 1; i < y; i++){
                if (i % 2 != 0){
                    soma = soma + i;
                }
            }
            cout << soma << endl;
        }
    }


    return 0;
}