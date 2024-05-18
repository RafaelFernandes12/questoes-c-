#include <bits/stdc++.h>
using namespace std;

int main(){

    int x[5];
    char resultado;

    for(int i = 0; i < 5; i++){
        cin >> x[i];
    }
    if(x[0] < x[1] && x[1] < x[2] && x[2] < x[3] && x[3] < x[4]){
        resultado = 'C';
    }
    else if(x[0] > x[1] && x[1] > x[2] && x[2] > x[3] && x[3] > x[4]){
        resultado = 'D';
    }
    else {
        resultado = 'N';
        }
    cout << resultado << endl;

    return 0;
}