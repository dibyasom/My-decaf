#include<bits/stdc++.h>

using namespace std;

typedef long ll;

ll collisions(map<ll, vector<ll> >& ants){
    map<ll, vector<ll> >::iterator line= ants.begin();
    ll pos=0, neg=0;
    while(line!=ants.end()){
        ll len= line->second.size();
        for(ll i=0; i<len; i++){
            if(line->second[i]>=0)
                pos++;
            else
                neg++;
        line++;
        }
    }
    return pos*neg;
}

int main(void){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int sum= 0, pos=0, neg=0;
        set<int, greater<int> > frq;
        set<int, greater<int> > dub;
        for(int i=0; i<n; i++){
            int m; cin >> m;
            pos=0, neg=0;
            for(int i=0; i<m; i++){
                int temp; cin >> temp;
                if(temp>=0)
                    pos++;
                else
                    neg++;
                temp= abs(temp);
                if(frq.find(temp)!=frq.end())
                    dub.insert(temp);
                frq.insert(temp);
            }
            sum+= pos*neg;
        }
        

        cout << sum-dub.size() << endl;
    }
    return 0;
}