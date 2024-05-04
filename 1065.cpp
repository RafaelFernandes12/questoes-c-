#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e;
    
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    for (int i = 0; i < 5; i++){

        cin >> a;

        if (a % 2 == 0){
            b++;
        }
        if (a % 2 != 0){
            c++;
        }

        if (a > 0){
            d++;
        }

        if (a < 0){
            e++;
        }
    }
    cout << b << " valor(es) par(es)" << endl;
    cout << c << " valor(es) impar(es)" << endl;
    cout << d << " valor(es) positivo(s)" << endl;
    cout << e << " valor(es) negativo(s)" << endl;
    return 0;
}