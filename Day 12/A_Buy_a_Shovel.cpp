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
    int k, r; cin >> k >> r;
    for(int x = 1; x <= 10; x++)
    {
        if((k * x) % 10 == 0 || (k * x) % 10 == r)
        {
            cout << x << nl;
            break;
        }
    }
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://codeforces.com/problemset/problem/732/A