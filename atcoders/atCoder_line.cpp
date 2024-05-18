#include <bits/stdc++.h>
using namespace std;
#define log(x) cout << x << endl;

int main(){

    int v[4];
    for(int i = 0; i < 4; i++) cin >> v[i];

    if(v[1] > v[2]){
        if(v[3] < v[1] && v[3] > v[2]) cout << "Yes" << endl;
        else {
            cout << "No" << endl;
        }
    }
    else {
        if(v[3] > v[1] && v[3] < v[2]) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }


    return 0;
}