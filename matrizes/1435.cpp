#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int matriz[n][n], soma;


    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
            matriz[i][j] = 1;
            if(i != 0 && j != 0 && i != (n - 1) && j != (n - 1)) matriz[i][j] = 2;
        }
    }

    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}