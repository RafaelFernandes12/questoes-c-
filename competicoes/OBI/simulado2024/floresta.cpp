#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, m, a, cnt = 0, initial = 0;  cin >> t >> m >> a;

    while (t <= a){
        initial = t;
        t *= m;
        t += initial;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}