#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a;
    b = a/3600;
    a = a%3600;

    c = a/60;

    d = a%60;


    cout << b << ":" << c << ":" << d << endl;
    return 0;
}