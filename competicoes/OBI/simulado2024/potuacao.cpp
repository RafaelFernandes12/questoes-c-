#include <bits/stdc++.h>
using namespace std;

int main(){

    int e,a,c; cin >> e >> a >> c;

    int sum = e * 2 + a * 3 + c * 5;

    if(sum >= 200) cout << "O" << endl;
    if(sum < 200 && sum >= 150) cout << "S" << endl;
    if(sum < 150 && sum >= 100) cout << "B" << endl;
    if(sum < 100) cout << "N" << endl;

    return 0;
}