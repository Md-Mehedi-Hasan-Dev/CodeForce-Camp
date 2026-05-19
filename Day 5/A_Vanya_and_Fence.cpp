#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, h, x, ans = 0; cin >> n >> h;
    ans += n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        ans += (x > h);
    }
    cout << ans;

    return 0;
}

// https://codeforces.com/problemset/problem/677/A