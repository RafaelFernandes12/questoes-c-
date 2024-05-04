#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a;
    b = a/365;
    a = a%365;

    c = a/30;

    d = a%30;


    cout << b << " ano(s)" << endl;
    cout << c << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;
    return 0;
}