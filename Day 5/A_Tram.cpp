#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, ans = 0, total = 0; cin >> n;
    while(n--)
    {
        int a, b; cin >> a >> b;
        total -= a, total += b;
        ans = max(ans, total);
    }
    cout << ans;

    return 0;
}

// https://codeforces.com/problemset/problem/116/A