#include<bits/stdc++.h>

using namespace std;

int min_swaps(vector<int>& c, int x, int y){
    int dealt= 0, len= c.size(), swaps= 0;
    while(true){
        for(int i=0; i<len; i++){
            dealt+= c[i];
            if(dealt<x){
                //tolerable
            } 
            else if(dealt>=x && dealt<=y){
                return swaps;
            }
            else{
                //swap
            }
        }
    }
    return 0;
}

int main(void){

    int t; cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> cards;
        while(n--){
            int temp; cin >> temp;
            cards.push_back(temp);
        }
        cout << min_swaps(cards, x, y) << endl;
    }
    return 0;
}