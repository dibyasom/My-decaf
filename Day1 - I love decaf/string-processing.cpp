#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int process(string);

int process(string str){
	int len= str.length(), char_at= 0, sum= 0, target= str[0];; 
	for(; char_at< len; char_at++){
		target= str[char_at]-48;
  		sum+= (0<= target && target<= 9) ?target :0;
	}
 
    return sum;
}

int main(void){
	int t; cin >> t;
	while(t--){
		string str; cin >> str;
		cout << process(str) << endl;
	}
	
	return 0;
}