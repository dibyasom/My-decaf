#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int findMin(vector<int>&, int n);

int findMin(vector<int>& arr, int n)
{
	int sum = 0; 
	for (int i = 0; i < n; i++)
		sum += arr[i];
	bool dp[n+1][sum+1];
	for (int i = 0; i <= n; i++)
		dp[i][0] = true;
	for (int i = 1; i <= sum; i++)
		dp[0][i] = false;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=sum; j++){
			dp[i][j] = dp[i-1][j];
			if (arr[i-1] <= j)
				dp[i][j] |= dp[i-1][j-arr[i-1]];
		}
	}

	int diff = INT_MAX;
	for (int j=sum/2; j>=0; j--){
		if (dp[n][j] == true){
			diff = sum-2*j;
			break;
		}
	}
	return diff;
}

int min_boxes(int k, vector<int>& boxes){
    sort(boxes.begin(), boxes.end(), greater<int>());

    ll curr_sum= 0, count= 0, len= boxes.size();
    vector<int> bricks;
    while(curr_sum<2*k && count<len){
        bricks.push_back(boxes[count]);
        curr_sum+= boxes[count++];
    }

    ll a= 0, b= 0;
    while(true){
        int diff= findMin(bricks, count);

        if(curr_sum-diff>=2*k)
            return count;
        if(count>=len)
            return -1;
        bricks.push_back(boxes[count]);
        curr_sum+= boxes[count++];
    }
}

int main(void){

    int t; cin >> t;
    while(t--){
        int n; int k;
        cin >> n >> k;
        
        vector<int> boxes;
        while(n--){
            int temp; cin >> temp;
            boxes.push_back(temp);
        }

        cout << min_boxes(k, boxes) << endl;
    }
    return 0;
}