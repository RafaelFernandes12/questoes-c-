#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, c, m; cin >> n >> c >> m;
    int x[c];
    int y[m];
    int ctn = c;
    for(int i = 0; i < c; i++) cin >> x[i];
    for(int i = 0; i < m; i++) cin >> y[i];

    for(int i = 0; i < c; i++) {
        for(int j = 0; j < m; j++) {
            if(x[i] == y[j]) {
                ctn--;
                break;
            }
        }   
    }


    cout << ctn << endl;

    return 0;
}