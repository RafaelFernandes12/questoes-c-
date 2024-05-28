#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, par[5], impar[5], j = 0, k = 0;


    for (int i = 0; i < 15; i++){
        
    cin >> n;
        if(n % 2 == 0){
            
            par[j] = n;
            j++;
        }
        else {
            
            impar[k] = n;
            k++;
        }
        if(j == 5){
            for(int a = 0; a < 5; a++){
                cout << "par[" << a << "] = "  << par[a] << endl;
            }
            j = 0;
        }
        if(k == 5){
            for(int a = 0; a < 5; a++){
                cout << "impar[" << a << "] = "  << impar[a] << endl;
            }
            k = 0;
        }
        if(i == 14){
           for(int a = 0; a < k; a++){
                cout << "impar[" << a << "] = "  << impar[a] << endl;
            }
            for(int a = 0; a < j; a++){
                cout << "par[" << a << "] = "  << par[a] << endl;
            }
        }
    }

    return 0;
}