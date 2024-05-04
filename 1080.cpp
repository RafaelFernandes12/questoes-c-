#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,maior = 0, p =0;



    for (int i = 0; i < 100; i++){
        cin >> x;

        if(maior < x) {
            maior = x;
            p = i + 1;
        }
    }
        cout << maior << endl;
        cout << p << endl;
    return 0;
}