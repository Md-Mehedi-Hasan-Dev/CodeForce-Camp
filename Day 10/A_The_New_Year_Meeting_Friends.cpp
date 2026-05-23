#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    vector<int> v(3);
    for(int &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    cout << v[2] - v[0];

    return 0;
}

// https://codeforces.com/problemset/problem/723/A