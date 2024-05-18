#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    string n;
    cin >> a >> b;
    int count = a;

    for (int i = 0; i < b; i++){
        cin >> n;

        if(n == "fechou") count++;
        else if(n == "clicou") count--;
    }

    cout << count << endl;

    return 0;
}