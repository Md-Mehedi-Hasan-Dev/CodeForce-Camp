#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, mx = INT_MIN, mn = INT_MAX, mx_idx_left = 0, mn_idx_right = 0; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        
        if(v[i] < mn)
        {
            mn_idx_right = i;
            mn = v[i];
        }
        else if(v[i] == mn)
            mn_idx_right = i;
        if(v[i] > mx)
        {
            mx_idx_left = i;
            mx = v[i];
        }
    }
    cout << (mx_idx_left - 1) + (n - mn_idx_right) - (mn_idx_right < mx_idx_left);

    return 0;
}

// https://codeforces.com/problemset/problem/144/A