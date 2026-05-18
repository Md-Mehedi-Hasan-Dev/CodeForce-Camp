#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int k, n, w, m, ans; cin >> k >> n >> w;
    m = k * w * (w + 1) / 2;
    if(m >= n) cout << m - n;
    else cout << 0;

    return 0;
}

// https://codeforces.com/problemset/problem/546/A