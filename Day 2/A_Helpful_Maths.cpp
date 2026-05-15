#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    string s; cin >> s;
    vector<char> v;
    for(char c : s)
    {
        if(c != '+')
            v.push_back(c);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if(i < v.size() - 1) cout << "+";
    }

    return 0;
}

// https://codeforces.com/problemset/problem/339/A