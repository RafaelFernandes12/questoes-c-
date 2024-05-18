#include <bits/stdc++.h>
using namespace std;

int main(){

    int x, distancia, tempo, sum = 0;
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> distancia >> tempo;
        sum += distancia * tempo;
    }

    cout << sum << endl;


    return 0;
}