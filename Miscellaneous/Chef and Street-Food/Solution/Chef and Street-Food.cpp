#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vect;

int max_profit()
{
	 long profit, curr_profit;
	 int n,s,v,p; 
	 cin >> n;
	while(n--)
	{
	 cin >> s >> v >> p;
	 
  	 curr_profit = floor(p/s)*v;
  	 profit = (curr_profit > profit)?curr_profit : profit;
	}
	
	return profit;
}

int main()
{
	 int t; cin >> t;
	 while(t--)
	 {
	 	/* TODO (#1#): input N, stores[N], price[N], people[N]
	 	               
	 	               profit = price[i]*people[i] / stores[i]
	 	               
	 	               max profit?? */
	 	cout << max_profit() << endl;
	 }
	
	 
	return 0;
}
