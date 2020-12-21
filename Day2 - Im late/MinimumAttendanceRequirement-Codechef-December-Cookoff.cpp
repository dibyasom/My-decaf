#include<bits/stdc++.h>

using namespace std;

string can_chef_pass(string attd){
    int n= attd.length(), p=0, a=0;
    for(int i=0; i<n; i++)
        if(attd[i]=='1') 
            p++;
        else
            a++;
 
    if((p+120-n)*1.0/120 >= .75)
        return "YES";
    else
        return "NO";
}

int main(void){

    int t; cin >> t;
    while(t--){
        int n; string attd;
        cin >> n >> attd;
        cout << can_chef_pass(attd) << endl;
    }
    return 0;
}