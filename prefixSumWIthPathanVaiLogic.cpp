// Given 2 numbers N and Q , an array A of N number and Q number of pairs L , R. For each query Q print a single line that contains the summation of all numbers from index L to index R.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n;
    cin >> q;
    // cout << n << " " << q;
    long long arr[n], pref[n] = {0};

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
        if (i == 0)
        {
            pref[i] = pref[i] + arr[i];
        }
        else
        {
            pref[i] = pref[i - 1] + arr[i];
        }
    }

    // for (int i = 0; i < n; i++)
    // {

    //     cout << pref[i] << " ";
    // }

    for (int i = 0; i < q; i++)
    {
        long long l, r;
        cin >> l;
        cin >> r;
        long long sums;
        l--;
        r--;
        if (l == 0)
        {
            sums = pref[r];
        }
        else if (l > 0)
        {
            sums = pref[r] - pref[l - 1];
        }
        // cout << pref[r] << " " << pref[l - 1] << endl;
        cout << sums << endl;
    }

    return 0;
}