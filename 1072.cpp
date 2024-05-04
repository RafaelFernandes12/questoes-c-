#include <bits/stdc++.h>
using namespace std;

int main(){

    int x,y = 0,soma = 0, n;
    cin >> x;

    for (int i = 0; i < x; i++){
        cin >> n;
        if (n >= 10 && n <= 20){
            y++;
        }
        else {
            soma++;
        }
    }
    cout << y << " in" << endl;
    cout << soma << " out" << endl;


    return 0;
}