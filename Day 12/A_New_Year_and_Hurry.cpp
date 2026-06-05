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

vector<int> v(10);

void sum()
{
    int sum = 0;
    for(int i = 1; i <= 10; i++)
    {
        sum += i;
        v[i - 1] = sum;
    }
}

void solve()
{
    sum();
    int n, k, tmp, ans = 0; cin >> n >> k;
    tmp = 240 - k;
    for(int i = 0; i < n; i++)
    {
        if(5 * v[i] > tmp) break; // if (5 * (i + 1) * (i + 2) / 2 > tmp)
        ans = i + 1;
    }
    cout << ans;
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://codeforces.com/problemset/problem/750/A

/*
    int total = 0;
    int answer = 0;

    for (int i = 1; i <= n; i++) {
        total += 5 * i;

        if (total + k <= 240)
            answer++;
        else
            break;
    }

    cout << answer << endl;
*/