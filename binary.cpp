  #include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {1 ,2 ,3, 4, 5 ,6 ,7 ,8 ,9,10};
    int n = v.size();

    int target = 8 ; 


    int low = 0 ; 
     int high = n-1;
     while (low<=high)
     {
        int mid = (low+high)/2;
        if(v[mid]==target) {
            cout<<"target "<<mid;
               break ; 
        }
        else if ( v[mid]>target) high=mid-1;
        else {
            low=mid+1;
        }
    }
     





    return 0;
}