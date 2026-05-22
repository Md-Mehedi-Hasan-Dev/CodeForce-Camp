#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int k, l, m, n, d, cnt = 0; cin >> k >> l >> m >> n >> d;
    for(int i = 1; i <= d; i++)
        if((i % k == 0) || (i % l == 0) || (i % m == 0) || (i % n == 0))
            cnt++;
    cout << cnt;

    return 0;
}

// https://codeforces.com/problemset/problem/148/A