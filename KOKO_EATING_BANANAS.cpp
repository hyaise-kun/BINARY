#include <bits/stdc++.h>
using namespace std;




class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();


        int low = 1;
       int high = *max_element(piles.begin(), piles.end());  // dereferencing the iterator or smth 

        int ans = 0;

        while (low <= high) {

            int mid = low + (high - low) / 2;

          long long  time = 0;
            for (int i = 0; i < n; i++) {
                if (piles[i] <= mid) {
                    time += 1;
                } 
                else {
                    time += ceil((double)(piles[i])/mid);
                }
            }

            if ( time>h) {
                     low=mid+1;
            }

            else if (time<=h){
                ans =mid;
              high=mid-1;
            }

    

        }


        return ans ; 
    }
};





int main()
{
    
    return 0;
}
//TC -> O(n*log2(high))