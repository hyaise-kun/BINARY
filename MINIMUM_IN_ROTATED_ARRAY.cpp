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

    int low = 0;
    int high = n - 1;

    int ans = INT_MAX;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[low] <= v[high])
        {
            ans = min(ans, v[low]);
            break;
        }

        else if (v[low] <= v[mid])
        {
            ans = min(ans, v[low]);

            low = mid + 1;
        }

        else if (v[mid] <= v[high])
        {
            ans = min(ans, v[mid]);

            high = mid - 1;
        }
    }

    cout << ans << endl;
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