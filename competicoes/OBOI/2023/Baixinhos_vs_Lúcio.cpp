#include <bits/stdc++.h>
using namespace std;

int main(){

    int v[3], a,b,c;
    for(int i = 0; i < 3; i++) cin >> v[i];

    c = *max_element(v, v + 3);
    b = *min_element(v, v + 3);

    for(int i = 0; i < 3; i++) if(v[i] != b && v[i] != c) a = v[i];
        
    if(a + b > c) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}