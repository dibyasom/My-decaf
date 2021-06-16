#include <bits/stdc++.h>

using namespace std;

int trailing_zeroes(int x){
    int zeroes = 0;
    for(int i=5; i<=x; i*=5){
        zeroes += x/i;
    }
    return zeroes;
}

int main(void){

    int x; cin >> x;
    cout << trailing_zeroes(x) << endl;

    return 0;
}