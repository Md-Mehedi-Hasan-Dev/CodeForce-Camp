#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, x, flag = 1; cin >> n;
    while(n--)
    {
        cin >> x;
        if(x == 1) {flag = 0; break;}
    }
    flag ? cout << "EASY" : cout << "HARD";
    return 0;
}

// https://codeforces.com/problemset/problem/1030/A