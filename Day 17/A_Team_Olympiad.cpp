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
    int n, w, cnt1, cnt2, cnt3; cin >> n;
    vi v(n), freq(4, 0), v1, v2, v3;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
        if(v[i] == 1) v1.pb(i + 1);
        else if(v[i] == 2) v2.pb(i + 1);
        else v3.pb(i + 1);
    }
    w = min({freq[1], freq[2], freq[3]});
    cout << w << nl;
    for(int i = 0; i < w; i++)
        cout << v1[i] << " " << v2[i] << " " << v3[i] << nl;
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://codeforces.com/problemset/problem/490/A