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
    string s, ans = ""; cin >> s;
    for(char &c : s)
        c = (char)tolower(c);
    for(int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if(c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' 
            || c == 'O' || c == 'o' || c == 'U' || c == 'u' || c == 'Y' || c == 'y')
            continue;
        else 
        {
            ans += '.';
            ans += c;
        }
    }
    cout << ans;
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://codeforces.com/problemset/problem/118/A