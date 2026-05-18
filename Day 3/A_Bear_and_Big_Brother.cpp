#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int a, b, cnt = 0; cin >> a >> b;
    while(a <= b)
    {
        cnt++;
        a *= 3, b *= 2;
    }
    cout << cnt;

    return 0;
}

// https://codeforces.com/problemset/problem/791/A