#include <bits/stdc++.h>
using namespace std;

int main (){

	unsigned int x, y;
    
    while(scanf("%u %u", &x, &y) != EOF){
        
        printf("%u\n", x ^ y);
    }

    return 0;
}