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
 
void solve()
{
    ll n; cin >> n;
    bool allNeg = true, allPos = true, flip = false;
    vll v(n), a;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] > 0) allNeg = false;
        if(v[i] < 0) allPos = false;
    }
    if(allNeg)
    {
        cout << 0 << nl;
        cout << nl;
        return;
    }
    if(allPos)
    {
        cout << 1 << nl;
        cout << n << nl;
        return;
    }
    for(int i = n - 1; i >= 0; i--)
    {
        ll cur = flip ? -v[i] : v[i];
        if(cur > 0)
        {
            a.pb(i + 1);
            flip = !flip;
        }
    }
    cout << sz(a) << nl;
    for(ll i : a)
        cout << i << sp;
    cout << nl;
}
 
int main()
{
    Md_Mehedi_Hasan;
 
    int t; cin >> t;
    while(t--) solve();
 
    return 0;
}
 
// https://codeforces.com/problemset/problem/2229/C1