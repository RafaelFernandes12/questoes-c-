#include <bits/stdc++.h>
using namespace std;

int main(){

    int v,p[3], ctn = 0; cin>>v;

    for(int i = 0;i < 3; i++){
        cin >> p[i];
        if(v >= p[i]) ctn++,v-=p[i];
    }
    cout << ctn << endl;

    return 0;
}