#include <bits/stdc++.h>
using namespace std;
#define log(x) cout << x << endl;

int main(){

    int n, k, count = 1;
    cin >> n >> k;
    int pessoas[n];
    int rest = k;

    for(int i = 0; i < n; i++)cin >> pessoas[i];

    for(int i = 0; i < n; i++){
        if(rest < pessoas[i]) count++, rest = k;
        rest -= pessoas[i];
    }

    log(count);
    return 0;
}