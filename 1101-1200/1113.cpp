#include <bits/stdc++.h>
using namespace std;

int main(){

    int x,y,soma = 0;

    for (int i = 0; i < 100; i++){

        cin >> x >> y;
        if(x == y){
            return 0;
        }
        else{
            if(x > y){
                cout << "Decrescente" << endl;
            }
            else{
                cout << "Crescente" << endl;
            }
        }
    }
    return 0;
}