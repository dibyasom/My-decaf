#include<bits/stdc++.h>

using namespace std;

int min_swaps(vector<int>& c, int x, int y){
    int dealt= 0, len= c.size(), swaps= 0, ;
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
                int min_= INT_MAX, max_= INT_MIN;
                for(int j=i+1; j<len; j++){
                    if(c[i]<min_)
                        min_= c[i];
                    if(c[i]>max_)
                        max_= c[i];
                }

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