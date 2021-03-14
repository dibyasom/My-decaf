#include<bits/stdc++.h>

using namespace std;

class solution {
    private:
        string seatArray;
    public:
        solution(string seatArray){
            this->seatArray = seatArray;
        }

        int solve(){
            string processedSeat = this->seatArray + '0';
            int groups = 0, len= this->seatArray.length();
            
            for(int i=0; i<len; i++){
                if(processedSeat[i]=='1' && processedSeat[i+1]=='0')
                    groups++;
            }
            return groups;
        }
};

int main(void){
    int t; cin >> t;
    while(t--){
        string seatArray; cin >> seatArray;
        solution mySolution = solution(seatArray);
        cout << mySolution.solve() << endl;
    }

    return 0;
}