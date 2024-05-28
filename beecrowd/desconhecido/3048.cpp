#include <bits/stdc++.h>
using namespace std;

int main(){

    int x, count = 0, atual;
    cin >> x;
    int y[x];

    for(int i = 0; i < x; i++){
        cin >> y[i];

    }
    for(int i = 0; i < x; i++){
        if(y[i] != atual) count++;
        atual = y[i];
    }
    cout << count << endl;


    return 0;
}