// greater than or equal to x .

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5, 6, 9, 10, 23};
        int ans = v.size();

int target = 10;

int n = v.size();

int low = 0 , high =n-1;

        while(low<=high){
                int mid = (low+high)/2;

                if(v[mid]>target){
                    ans=mid;
                        high = mid-1;

                }
                else {
                    low = mid+1;
                }






        }

        if(ans==n){
            cout<<-1<<endl;

        }

        else cout <<ans<<endl;
    return 0;
}