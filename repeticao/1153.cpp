#include <bits/stdc++.h>
using namespace std;

int fator(int x){
    if(x == 0){
        return 1;
    }
    return x * fator(x-1);
}

int main(){

    int res;
    cin >> res;

    cout << fator(res) << endl;


    return 0;
}