#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m, count = 0;
    cin >> n >> m;
    int x[n], y[m];

    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    for(int i = 0; i < m; i++){
        cin >> y[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(y[j] == x[i]){
                count++;
                y[j] = 0;
            }
        }
    }
    
    cout << count << endl;

    return 0;
}