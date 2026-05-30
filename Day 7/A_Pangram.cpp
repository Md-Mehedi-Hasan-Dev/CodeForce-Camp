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
    int n; cin >> n;
    set<char> st;
    for(int i = 0; i < n; i++)
    {
        char c; cin >> c;
        c = tolower(c);
        st.insert(c);
    }
    (st.size() == 26) ? yes : no;
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://codeforces.com/problemset/problem/520/A