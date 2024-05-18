#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c,d;

    cin >> a >> b >> c >> d;
    int ab = a + b, ac = a + c, ad = a + d;
    int bc = b + c, bd = b + d;
    int cd = c + d;
    if(ab > c && bc > a && ac > b){ // abc
        cout << 'S' << endl;
    }
    else if(ad > b && bd > a & ab > d){ // abd
        cout << 'S' << endl;
    }
    else if(ad > c && cd > a & ac > d){ // acd
        cout << 'S' << endl;
    }
    else if(bd > c && cd > b & bc > d){ // bcd
        cout << 'S' << endl;
    }
    else {
        cout << 'N' << endl;
    }


    return 0;
}