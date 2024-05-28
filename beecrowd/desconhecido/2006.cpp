#include <bits/stdc++.h>
using namespace std;

int main(){

    int x, y[5], count = 0;
    cin >> x;

    for(int i = 0; i < 5; i++){
        cin >> y[i];
        if(y[i] == x) count++;
    }

    cout << count << endl;


    return 0;
}