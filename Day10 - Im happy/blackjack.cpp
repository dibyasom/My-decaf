#include<bits/stdc++.h>

using namespace std;

int min_swaps(vector<int>& c, int x, int y){
    int dealt= 0, len= c.size(), swaps= 0, pseudo_dealt, diff, opt_dealt= INT_MAX, org_, new_;
    bool st= true;
    for(int i=0; i<len; i++){
        dealt+= c[i];
        if(dealt<x)
            continue;//tolerable
        if(dealt>=x && dealt<=y)
            return swaps;

        //swap
        if(i==len-1 && st){
            i--; dealt-= c[len-1];
            st= false;
        }

        diff= INT_MAX;
        for(int j=0; j<=i; j++){//dealt
            for(int k=i+1; k<len; k++){//not-dealt
                pseudo_dealt= dealt-c[j]+c[k];
                // cout << pseudo_dealt << "*\n";//****************
                if(pseudo_dealt>= x && pseudo_dealt<= y)
                    return swaps+1;
                if(pseudo_dealt<= y){
                    opt_dealt= pseudo_dealt;
                    org_= j;
                    new_= k;
                    if(k==len-1)
                        st= false;
                    break;
                }
                // if(y-pseudo_dealt<diff){
                //     diff= abs(x-pseudo_dealt);
                //     opt_dealt= pseudo_dealt;
                //     org_= j;
                //     new_= k;
                // }
            }
        }
        if(opt_dealt>dealt)
            return -1;
        dealt= opt_dealt;
        swap(c[org_], c[new_]);
        swaps++;
        
    }

    return -1;
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