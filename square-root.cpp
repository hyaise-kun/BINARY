#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; 
    cin >> n ; 

        int low = 1 ; 
        int high = n/2;
int ans = -1 ; 
        while ( low <=high ){
            int mid = low+(high-low)/2;

            if(mid*mid==n){
                cout<<mid<<endl;
                return  0 ;
            }

                else if( mid*mid<n){
                    low=mid+1;
                    ans = mid;
                }


                else {

                    high = mid-1;
                }


        }


if(ans!=-1){
    cout<<ans<<endl;
}

    return 0;
}