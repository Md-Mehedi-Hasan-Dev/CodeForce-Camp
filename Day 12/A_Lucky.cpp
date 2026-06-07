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
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)a.size()
using ll = long long;
using ull = unsigned long long;

void solve()
{
    string s; cin >> s;
    int first = 0, last = 0;
    // for(int i = 0, j = s.length() - 1; i < j; i++, j--)
    //     first += s[i] - '0', last += s[j] - '0';
    // (first == last) ? yes : no;
    (s[0] + s[1] + s[2] == s[3] + s[4] + s[5]) ? yes : no;
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

// https://codeforces.com/problemset/problem/1676/A