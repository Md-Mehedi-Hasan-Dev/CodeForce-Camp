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
    int n, m, cnt = 0, lcnt = 0, a, b, f, l; cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> v[i][j];
    for(int i = 0; i < n; i++)
    {
        lcnt = 0;
        for(int j = 0; j < m; j++)
            if(v[i][j] == '#') lcnt++;
        cnt = max(cnt, lcnt);
        if(lcnt == cnt)
            a = i;
    }
    for(int i = 0; i < m; i++)
    {
        if(v[a][i] == '#')
        {
            f = i;
            break;
        }
    }
    for(int i = m - 1; i >= 0; i--)
    {
        if(v[a][i] == '#')
        {
            l = i;
            break;
        }
    }
    b = (f + l) / 2;
    cout << a + 1 << sp << b + 1 << nl;
    
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

// https://codeforces.com/problemset/problem/1985/D