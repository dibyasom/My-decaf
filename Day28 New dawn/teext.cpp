#include <bits/stdc++.h>
using namespace std;

long long greatestValueDays(vector<int> ratings) {
    int maxElementIndex = std::max_element(ratings.begin(),ratings.end()) - ratings.begin();
    int maxElement = *std::max_element(ratings.begin(),ratings.end());
    long long sum = maxElement;

    int l_span=1, 
        r_span=1, 
        span_min=INT_MAX,
        prev_min=maxElement;
        
    while(maxElementIndex-l_span>=0){
        int to_be_added = ratings[maxElementIndex-l_span];
        span_min = (to_be_added < span_min) ?to_be_added :span_min;
        if((sum + to_be_added)*span_min > sum*prev_min){
            sum += to_be_added;
            prev_min = span_min;
            l_span++;
        } else {
            break;
        }
    }

    span_min = prev_min;
    while(maxElementIndex+r_span < ratings.size()){
        cout << sum << " " << prev_min << endl;
        int to_be_added = ratings[maxElementIndex+r_span];
        span_min = (to_be_added < span_min) ?to_be_added :span_min;
        if((sum + to_be_added)*span_min > sum*prev_min){
            sum += to_be_added;
            prev_min = span_min;
            r_span++;
        } else {
            break;
        }
    }
    
    return sum*prev_min;
}

int main(void){
    vector<int> arr = {3,1,6,4,5,2};
    cout << greatestValueDays(arr) << endl;
}