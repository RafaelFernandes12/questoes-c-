#include <bits/stdc++.h>
using namespace std;

int main(){

    int x, y = 0;

    while (y != 2002){
        cin >> y;
        if(y == 2002){
            cout << "Acesso Permitido" << endl;
        }
        else{
            cout << "Senha Invalida" << endl;
        }
    }

    return 0;
}