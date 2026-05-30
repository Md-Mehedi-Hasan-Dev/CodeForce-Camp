// - Md. Mehedi Hasan

#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<long long>
#define ip(x) for (auto &it : x) cin >> it
#define all(x) x.begin(), x.end()
using ll = long long;
using ull = unsigned long long;

void solve()
{
    string s; cin >> s;
    int upper = 0, lower = 0;
    for(char c : s)
    {
        if(c >= 'A' && c <= 'Z') upper++;
        else lower++;
    }
    if(upper > lower)
        for(char &c : s)
            c = toupper(c);
    else
        for(char &c : s)
            c = tolower(c);
    cout << s << nl;
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://codeforces.com/problemset/problem/59/A