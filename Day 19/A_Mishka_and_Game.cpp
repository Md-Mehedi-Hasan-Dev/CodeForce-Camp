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
    int t, a, b, cnta = 0, cntb = 0; cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a == b) continue;
        (a > b) ? cnta++ : cntb++;
    }
    if(cnta > cntb)
        cout << "Mishka";
    else if(cnta < cntb)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://codeforces.com/problemset/problem/703/A