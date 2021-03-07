#include<bits/stdc++.h>

using namespace std;

int main(void){

    int binary_length =4;

    string input;
    cin >> input;
    
    int place_value = 1;
    int decimal = 0;
    for(int i=binary_length-1; i>=0; i--){
        if(input[i]=='1'){
            decimal+= place_value;
        } 
        place_value*=2;
    }

    cout << decimal << endl;

    return 0;
}