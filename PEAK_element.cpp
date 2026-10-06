#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n == 1)
    {
        cout << v[0] << endl;
        return;
    }
    if (v[0] > v[1])
    {
        cout << v[0] << endl;
        return;
    }
    if (v[n - 1] > v[n - 2])
    {
        cout << v[n - 1] << endl;
        return;
    }

    int low = 1;
    int high = n - 2;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (v[mid] > v[mid + 1] && v[mid] > v[mid - 1])
        {
            cout << v[mid] << endl;
            return;
        }

        if (v[mid] > v[mid + 1])
        {
            high = mid - 1;
        }

        else if (v[mid] > v[mid - 1])
        {
            low = mid + 1;
        }

        else
            low = mid + 1;           // when mid is minima mid-1>mid<mid+1
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}