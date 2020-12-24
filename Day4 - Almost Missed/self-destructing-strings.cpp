#include<bits/stdc++.h>

using namespace std;

int collapse_string(string str){
    
    if(str.length()%2)
        return -1;
    long zeros= 0, ones= 0;
    for(auto dig: str)
        if(dig== '0')
            zeros++;
        else
            ones++;

    return abs(zeros - ones)/2;
    
}

int main(void){

    int t; cin >> t;
    while(t--){
        string str; cin >> str;
        cout << collapse_string(str) << endl;
    }
    return 0;
}