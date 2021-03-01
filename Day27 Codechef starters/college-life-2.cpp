#include<bits/stdc++.h>

using namespace std;

int main(void){

    int t; cin >> t;
    while(t--){
        int s; cin >> s;

        long netTime = 0;
        vector<int> intro(s);
        for(int i=0; i<s; i++){
            int temp; cin >> intro[i];
        }

        for(int i=0; i<s; i++){
           int e; cin >> e;
           netTime+=intro[i];
           for(int j=0; j<e; j++){
               long ep_length; cin >> ep_length;
               netTime += (ep_length-intro[i]);
           }
        }

        cout << netTime << endl;
    }
    return 0;
}