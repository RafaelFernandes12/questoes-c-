#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 1;
    cout << "I=" << i << " J=" << 60 << endl;
    for (int j = 55; j >= 0; j -= 5){
        cout << "I=" << (i += 3) << " J=" << j << endl;
    }

    return 0;
}