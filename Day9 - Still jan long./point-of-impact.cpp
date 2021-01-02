#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

void K_collisions(ll n, ll k, ll x, ll y){
    if(x==y){
        cout << n << " " << n << endl;
        return;
    }
    bool swapped= 0;
    if(y>x){
        swap(x, y);
        swapped= 1;
    }

    map<int, vector<int> > col_cord;
    // Collision-1
    ll t= n-x;
    col_cord[0].push_back(n);
    col_cord[0].push_back(y+t);
    // Collision-2
    t= n-col_cord[0][1];
    col_cord[1].push_back(col_cord[0][0]-t);
    col_cord[1].push_back(n); 
    // Collision-3
    col_cord[2].push_back(0);
    col_cord[2].push_back(col_cord[1][1]-col_cord[1][0]);
    // Collision-4
    col_cord[3].push_back(col_cord[2][1]);
    col_cord[3].push_back(0);

    if(swapped)
        for(int i=0; i<4; i++){
            t= col_cord[i][0];
            col_cord[i][0]= col_cord[i][1];
            col_cord[i][1]= t;
        }
    
    // for(int i=0; i<4; i++)
    //     cout << col_cord[i][0] << ", " << col_cord[i][1] << endl;

    ll final_col_condensed= (k-1)%4;
    cout << col_cord[final_col_condensed][0] << " " << col_cord[final_col_condensed][1] << endl;
}

int main(void){

    ll t; cin >> t;
    while(t--){
        ll N, K, x, y;
        cin >> N >> K >> x >> y; //Meaningless var names, cus thta's what the problem statement calls these pricks.
        K_collisions(N, K, x, y);
    }
    return 0;
}