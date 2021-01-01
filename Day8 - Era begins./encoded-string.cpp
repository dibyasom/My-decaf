#include<bits/stdc++.h>

using namespace std;

string decode(string str){
    int len= str.length(), ind, count= 0;
    char decoded_str[len/4+1]; decoded_str[len/4]= '\0';

    for(int i=0; i<len; i+=4){
        ind= 0;
        if(str[i]=='1')
            ind+= 8;
        if(str[i+1]=='1')
            ind+= 4;
        if(str[i+2]=='1')
            ind+= 2;
        if(str[i+3]=='1')
            ind+= 1;
        
        decoded_str[count++]= 97+ind;
    }

    return decoded_str;
}

int main(void){

    int t; cin >> t;
    while(t--){
        int t; cin >> t;
        string encd_str; cin >> encd_str;
        cout << decode(encd_str) << endl;
    }
    return 0;
}