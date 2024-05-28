#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m, ctn = 0; cin >> n >> m;
    set <int> x;

    for(int i = 0; i < m; i++){
        int value; cin >> value;
        x.insert(value);
    }
    cout << n - x.size() << endl;

    return 0;
}