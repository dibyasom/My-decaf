/*
 * author @Dibyasom puhan.
*/
#include<bits/stdc++.h>

using namespace std;

class solution {
    private:
        int n, h, x;
    
    public: 
        solution(int n,int h,int x){
            this->n = n;
            this->h = h;
            this->x = x;
        }

        string solve(){
            bool canHe = false;
            while(this->n--){
                int timeZone; cin >> timeZone;
                if(timeZone+this->x >= this->h)
                    canHe = true;
            }

            return (canHe) ?"YES" :"NO";
        }
};
int main(void){
    int n,h,x;
    cin >> n >> h >> x;

    solution mySolution = solution(n, h, x);
    cout << mySolution.solve() << endl;
}