#include<bits/stdc++.h>

using namespace std;

int main(void){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        vector<long> numnum;
        while(n--){
            long num; cin >> num;
            numnum.push_back(num);
        }
        sort(numnum.begin(), numnum.end(), greater<long>());
        long a=numnum[0], b=numnum[1], i=2;
        long nega=LONG_MAX, negb=LONG_MAX, pa=LONG_MIN, pb=LONG_MIN;
        for(int i=2; i<numnum.size(); i++){
            long val = numnum[i];
            if(val>pa){
                pa=val;
            } else if(val>pb){
                pb=val;
            }
            if(val<0 && val>nega){
                nega=val;
            } else if(val<0 && val>negb){
                negb=val;
            }
        }

        if((a<0 || b<0) && !(a<0 && b<0)){
            cout << "Hello" << endl;
            a=nega;
            b=negb;
        } if(a==0){
            a=pa;
        } if(b==0){
            b=pb;
        } 
        
        long long res = a*b+a-b;
        cout << res << endl;
    }
    return 0;
}