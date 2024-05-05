#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,count = 0;
    cin >> n;

    char x[n];
    cin >> x;

    for (int i = 0; i < n; i++){
        if(x[i] == 'a' && x[i + 1] == 'a'){
            count++;
        }
        if(x[i] == 'a' && x[i - 1] == 'a'){
            count++;
        }
    }
    count--;
    cout << count << endl;

    

    return 0;
}