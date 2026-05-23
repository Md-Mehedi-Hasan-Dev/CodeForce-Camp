#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        for(char &c : s)
            c = tolower(c);
        cout << ((s == "yes") ? "YES" : "NO") << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1703/A