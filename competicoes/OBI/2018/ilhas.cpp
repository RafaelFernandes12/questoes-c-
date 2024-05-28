#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m; cin >> n >> m;
    int vetor[1000];

    for(int i = 0; i < m; i++) {
        int ui, vi, pi; cin >> ui >> vi >> pi;
        vetor[ui] += ui;
        vetor[vi] += vi;
        vetor[pi] += pi;
    }
    int s; cin >> s;
    


    return 0;
}