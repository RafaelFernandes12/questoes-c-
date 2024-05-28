#include <bits/stdc++.h>
using namespace std;
#define MAX_N (50)
int vetor[MAX_N];

int main(){

    int m, n, soma = 0, res = 0; 
    cin >> m >> n;
    for(int i = 1; i <= n; ++i) vetor[i] = 0;

    for(int i = 0; i < m; ++i){
        int x, v, y; cin >> x >> v >> y;
        vetor[x] += v;
        vetor[y] -= v;
        soma += v;
    }
    for(int i = 1; i <= n; ++i)
        if(vetor[i] > 0) res += vetor[i];
    if(res < soma) cout << 'S' << "\n" << res << endl;
    else cout << 'N' << "\n" << res << endl;


    return 0;
}