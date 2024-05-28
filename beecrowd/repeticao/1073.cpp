#include <bits/stdc++.h>
using namespace std;

int main(){

    int x;
    cin >> x;

    for (int i = 1; i <= x; i++){

        if (i % 2 == 0){
            int sum = i*i;
            cout << i << "^2 = " << sum << endl ;
        }
    }
    return 0;
}