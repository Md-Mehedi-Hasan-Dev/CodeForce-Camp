#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, ans = 0; cin >> n;
    string s; cin >> s;

    for(int i = 1; i < n; i++)
        if(s[i] == s[i - 1]) ans++;
    cout << ans;

    return 0;
}

// https://codeforces.com/problemset/problem/266/A