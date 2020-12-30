#include<bits/stdc++.h>

using namespace std;

void reciept(string n){
   long len= n.length(), at= 0; bool state= true;
   while(at< len-1){
       if(n[at]> n[at+1]){
           n[at]= '*';
           break;
       }
       at++;
   }
   if(at==len-1)
       n[len-1]= '*'; 
   for(long i=0; i<len; i++){
       if(!(n[i]=='*' || (n[i]=='0' && state))){
           state= false;
           cout << n[i]; 
       }
   }
   cout << endl; 
}


int main(void){

    int t; cin >> t;
    while(t--){
        string n; cin >> n;
        reciept(n);
    }
    return 0;
}