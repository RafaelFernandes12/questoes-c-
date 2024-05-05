#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b,c,d, media, final, final1;
    cin >> a >> b >> c >> d;

    media = (a * 2 + b * 3 + c * 4 + d) / 10.0;

    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;

    if (media >= 7){
        cout << "Aluno aprovado." << endl;
    }
    if (media >= 5 && media <= 6.9){
        cin >> final;
        final1 = (media + final) / 2.0;
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame:" << final1 << endl;
        if(final1 >= 5){
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << final1 << endl;
        }else {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << final1 << endl;
        }
    }
    if (media < 5){
        cout << "Aluno reprovado." << endl;
    }
    return 0;
}