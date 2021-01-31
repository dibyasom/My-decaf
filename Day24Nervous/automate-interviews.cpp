#include<bits/stdc++.h>

using namespace std;

string interviewResponse(vector<int>& res, int k){
    int solved=0; bool tooSlow = false, bot = true;
    for(auto status: res){
        if(bot && status>1)
            bot = false;
        if(status>k)
            tooSlow = true;
        if(status> -1)
            solved++;
    }


    if(solved < ceil(res.size()/2.0))
        return "Rejected";
    if(tooSlow)
        return "Too Slow";
    if(solved==res.size() && bot)
        return "Bot";
    return "Accepted";
}

int main(void){

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k; 
        vector<int> res;
        while(n--){
            int t; cin >> t;
            res.push_back(t);
        }
        cout << interviewResponse(res, k) << endl;
    }
    return 0;
}