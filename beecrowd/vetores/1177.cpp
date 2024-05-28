#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, v[1000], j = 0;

    cin >> n;
    n--;
    for (int i = 0; i < sizeof(v) / 4; i++){
        
        if(j == n){
            v[i] = j;
            j = 0;
        }
        else {
            v[i] = j;
            j++;
        }

        cout << "N[" << i << "] = "  << v[i] << endl;
    }

    return 0;
}