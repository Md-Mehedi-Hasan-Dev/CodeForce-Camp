// - Md. Mehedi Hasan

#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#define nl '\n'
#define sp " "
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<long long>
#define ip(x) for (auto &it : x) cin >> it
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)a.size()
using ll = long long;
using ull = unsigned long long;

ll solution(string s, string t)
{
    int n = s.length();
    int i = n - 1, del = 0;
    while(i >= 0 && s[i] != t[1])
        i--, del++;
    if(i < 0) return LONG_LONG_MAX;
    i--;
    while(i >= 0 && s[i] != t[0])
        i--, del++;
    if(i < 0) return LONG_LONG_MAX;
    return del;
}

void solve()
{
    string s; cin >> s;
    ll ans = LONG_LONG_MAX;
    ans = min(ans, solution(s, "00"));
    ans = min(ans, solution(s, "25"));
    ans = min(ans, solution(s, "50"));
    ans = min(ans, solution(s, "75"));
    cout << ans << nl;
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

// https://codeforces.com/problemset/problem/1593/B