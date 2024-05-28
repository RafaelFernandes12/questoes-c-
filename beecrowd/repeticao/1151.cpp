#include <bits/stdc++.h>
using namespace std;

int main(){

    int x, a = 0, b = 1, c = 0, count = 1;

    cin >> x;

    for (int i = 0; i < x; i++){
        if(count == x){
            cout << a << "\n";
        }
        else {
            cout << a << " ";
            count++;
        }

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}