#include<bits/stdc++.h>

using namespace std;
 
int main(void){

    int t; cin >> t;
    while(t--){
        int d, c; cin >> d >> c;
        int a1, b1, a2, b2, a3, b3;
        cin >> a1 >> a2 >> a3;
        cin >> b1 >> b2 >> b3;
        
        int d1 = a1+a2+a3;
        int d2 = b1+b2+b3;
        bool dd1 = (d1<150) ?false :true;
        bool dd2 = (d2<150) ?false :true;

        if(dd1 && dd2){
            if(2*d > c){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else if (dd1 || dd2){
            if(d > c){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}