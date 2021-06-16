#include<bits/stdc++.h>

using namespace std;

unsigned int len (int x){
    if(x==0)
        return 1;
    return (unsigned int)log10(abs(x))+1;
}


int main(){
    int x; cin >> x;
    cout << len(x) << endl;
}