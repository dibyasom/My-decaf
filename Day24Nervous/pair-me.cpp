#include<bits/stdc++.h>

using namespace std;

int main(void){

    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        if((a+b)==c || (b+c)==a || (c+a)==b)
            cout << "YES";
        else   
            cout << "NO";
    }
    return 0;
}