#include <bits/stdc++.h>
using namespace std;

int main(){

    int d, g, ctn = 0; cin >> d >> g;

    while(true){
        if(d >= 6 && g >= 1) {
            ctn++;
            d -= 6;
            g -= 1;
        }
        else if(d > 6 && g == 0){
            d -= 1;
            g += 4;
        }
        else if(d < 6 && d > 0 && g > 4){
            d += 1;
            g -= 4;
        }
        else break;
    }

    cout << ctn << endl;

    return 0;
}