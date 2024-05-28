#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int x, y, a = 0, b = 1, c = 0;

    cin >> x;
    int tam = 100;
    long long int f[tam];

    for (int i = 0; i < tam; i++){
        f[i] = a;
        c = a + b;
        a = b;
        b = c;
    }
    for (int i = 0; i < x; i++){
        cin >> y;
        for(int j = 0; j < sizeof(f) / 4; j++){
            if(j == y){
                cout << "Fib(" << j << ") = "  << f[j] << endl;
            }
        }
    }

    return 0;
}