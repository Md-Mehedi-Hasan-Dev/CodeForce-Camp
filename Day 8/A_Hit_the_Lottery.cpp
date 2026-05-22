#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
using ll = long long;

int main()
{
    Md_Mehedi_Hasan;

    ll n; cin >> n;
    cout << n / 100 + n % 100 / 20 + n % 20 / 10 + n % 10 / 5 + n % 5;

    return 0;
}

// https://codeforces.com/problemset/problem/996/A