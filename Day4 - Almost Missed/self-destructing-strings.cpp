#include<bits/stdc++.h>

using namespace std;

int collapse_string(string str){
    int size = str.length(), l = 0, r = 1, rem = 0;
    
    if(size%2)
        return -1;

    for(int i=0; i<size; i++){
        if((l<size && r<size) && (str[l] != str[r])){
             str[l]='*'; str[r]='*';
            if(l-1 < 0){
                l = i+1;
                r = l+1;
                i++;
            }
            else{
                l = i-1;
                r = i+2;
                i++;
            }
        }
        else{
            l=r;
            r++;
        }
        cout << str;
        printf("\ti=%d\tl=%d\tr=%d\n\n", i, l, r);
    }

    for(int i=0; i<size; i++)
        if(str[i]!='*')
            rem++;
    return rem/2;
}

int main(void){

    int t; cin >> t;
    while(t--){
        string str; cin >> str;
        cout << collapse_string(str) << endl;
    }
    return 0;
}