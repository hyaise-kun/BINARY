#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int low = 1;
    int high = m;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long ch = 1;
        for (int i = 0; i < n; i++)
        {

            if(ch>m/mid){
                ch = m+1;
                break ; 
            }
            ch = ch * mid;
        }

        if (ch == m)
        {
            cout << mid << endl;
            return 0;
        }

        else if (ch < m)
        {
            low = mid + 1;
        }

        else
        {

            high = mid - 1;
        }
    }

    cout << -1 << endl;

    return 0;
}