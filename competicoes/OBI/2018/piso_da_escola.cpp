#include <bits/stdc++.h>
using namespace std;

int main(){

    int l, c; cin >> l >> c;
    int sumC = (c*l) + ((l-1) * (c-1));
    int sumL = ((c - 1) * 2) + ((l - 1) * 2);

    cout << sumC << endl;
    cout << sumL << endl;
    return 0;
}