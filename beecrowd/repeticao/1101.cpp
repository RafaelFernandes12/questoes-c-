#include <bits/stdc++.h>
using namespace std;

int main(){

    int x,y,soma = 0;

    for (int i = 0; i < 3; i++){

        cin >> x >> y;

        if (x == 0 || y == 0){
            return 0;
        }
        else {
            if(x > y){
                for(int i = y; i <= x;i++){
                    soma += i;
                    cout << i << " ";
                }
                cout << "Sum=" << soma << endl;
            }
            else{
                for(int i = x; i <= y;i++){
                    soma += i;
                    cout << i << " ";
                }
                cout << "Sum=" << soma << endl;
            }
        }
        soma = 0;
    }
    

    return 0;
}