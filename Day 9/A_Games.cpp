#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, cnt = 0; cin >> n;
    vector<pair<int, int>> v(n);
    for(auto &i : v)
        cin >> i.first >> i.second;
    vector<map<int, int>> vmp(n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == i) continue;
            else vmp[i][v[j].second]++;
        }
    }
    for (int i = 0; i < n; i++)
        for (auto mp : vmp[i])
            if(mp.first == v[i].first)
                cnt += mp.second;
    cout << cnt;

    return 0;
}

// https://codeforces.com/problemset/problem/268/A

/*
===== Simplest and Best Approach =====
    int n;cin >> n;
    vector<pair<int,int>> v(n);

    for (auto &p : v)
        cin >> p.first >> p.second;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && v[i].first == v[j].second)
                cnt++;
        }
    }
    cout << cnt;
*/