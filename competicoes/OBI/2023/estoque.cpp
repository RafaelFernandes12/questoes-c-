#include <bits/stdc++.h>
using namespace std;

int main(){

    int m,n, count = 0; cin >> m >> n;
    int matriz[m][n];

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++) cin >> matriz[i][j];
        
    int p,x,y; cin >> p;

    for(int i = 0; i < p; i++) {
        cin >> x >> y;
        if(matriz[x - 1][y - 1] > 0){
            count++;
            matriz[x - 1][y - 1]--;
        }
    }

    cout << count << endl;

    return 0;
}