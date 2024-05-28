#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n; 
    int sq[n];
    for(int i = 0; i < n; i++) cin >> sq[i];

    int res = 1;

    for(int i = 2; i < n; i++){
        if(sq[i] - sq[i - 1] != sq[i - 1] - sq[i - 2]) res++;
    }

    cout << res << endl;

    return 0;
}