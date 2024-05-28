#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, k = 0; cin >> a >> b;
    int sa[a],sb[b];

    for(int i = 0; i < a; i++) cin >> sa[i];
    for(int i = 0; i < b; i++) cin >> sb[i];

    for(int i = 0; i < a; i++){
        if(k < b && sa[i] == sb[k]) {
            k++;
        }
    }
    if(k == b) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}