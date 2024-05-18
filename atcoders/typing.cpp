#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t; cin >> s >> t;
    int ctn = 0;

    for(int i = 0; i < s.length();  i++){
        for(int j = ctn; j < t.length();  j++){
            if(s[i] == t[j]){
                ctn = j + 1;
                printf("%d ", j + 1);
                break;
            }
        }
    }
    cout << '\n';
    return 0;
}