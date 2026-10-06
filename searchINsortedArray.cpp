#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {7, 8, 9, 1, 2, 3, 4, 5, 6};

    int target = 4;

    int low = 0;
    int high = v.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (v[mid] == target)
        {
            cout << mid;
            return 0;
        }

        // Left half is sorted
        if (v[low] <= v[mid])
        {
            if (v[low] <= target && target <= v[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // Right half is sorted
        else
        {
            if (v[mid] <= target && target <= v[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    cout << -1;
    return 0;
}