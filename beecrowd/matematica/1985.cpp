#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    double c, d, sum = 0; 
    cin >> a;
    cout << fixed << setprecision(2);
    for(int i = 0; i < a; i++){
        cin >> c >> d;
        if(c == 1001) sum += 1.5 * d;
        if(c == 1002) sum += 2.5 * d;
        if(c == 1003) sum += 3.5 * d;
        if(c == 1004) sum += 4.5 * d;
        if(c == 1005) sum += 5.5 * d;
    }

    cout << sum << endl;

    return 0;
}