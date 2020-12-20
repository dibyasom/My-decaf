#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

void check_subarr_sum(ll *arr, ll n, ll s){
	 ll l=0, r=-1, sum=-1; s--;
	 while(r<n-1){
	 	if(sum+arr[r+1]<= s)
	 		sum+= arr[++r];
	    else 
	    	if(sum!= -1){
		        sum+= arr[++r];
		        while(sum>s && l<=r)
       			    sum-= arr[l++];
			}
            else{
				r= ++l;
				sum+= arr[r];
			}
		
		if(sum== s)
 			break;
	 }
	 
	 if(sum== s)
  	     cout << (l+1) << " " << (r+1) << endl;
	 else
	 	 cout << "-1\n";
}

int main(void){
	int t; cin >> t;
	while(t--){
		ll n,s; cin >> n >> s;
		ll arr[n];
		for(ll i=0; i<n; i++)
  		    cin >> arr[i];
		check_subarr_sum(arr, n, s);
	}
	return 0;
}