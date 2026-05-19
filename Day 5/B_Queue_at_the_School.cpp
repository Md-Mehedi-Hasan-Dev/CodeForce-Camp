#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, t; cin >> n >> t;
    string s; cin >> s;
    while(t--)
        for(int i = 0; i < s.length() - 1; i++)
            if(s[i] == 'B' && s[i + 1] == 'G') {swap(s[i], s[i + 1]); i++;}
    cout << s;

    return 0;
}

// https://codeforces.com/problemset/problem/266/B