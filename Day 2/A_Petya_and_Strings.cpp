#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    string s1, s2; cin >> s1 >> s2;
    for (auto& c : s1)
        c = tolower(c);
    for (auto& c : s2)
        c = tolower(c);
    if(s1 > s2) cout << 1;
    else if(s1 < s2) cout << -1;
    else cout << 0;

    return 0;
}

// https://codeforces.com/problemset/problem/112/A