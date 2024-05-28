#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n, sum = 0, menor = 0, ctn = 1; cin >> n;
    long long int a[n][n];

    for(int i = 0; i < n; i++)cin >> a[i][i];

    for(int i = 0; i < n; i++){
        for(int j = ctn; j < n; j++){
            if(a[j][j] < a[i][i]) a[j][j] = a[i][i], a[i][i] = a[j][j];            
        }   
        ctn++;
    }

    cout << sum << endl;

    return 0;
}