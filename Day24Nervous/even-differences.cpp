#include<bits/stdc++.h>

using namespace std;

int minOp(int n){
    int t, oddC=0, evenC=0; 
    while(n--){
        cin >> t;
        if(t&1)
            oddC++;
        else
            evenC++;
    }

    return ((oddC<evenC)?oddC:evenC);
}
int main(void){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << minOp(n) << endl;
    }
    return 0;
}