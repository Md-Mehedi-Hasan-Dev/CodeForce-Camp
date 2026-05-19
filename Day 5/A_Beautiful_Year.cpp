#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, a, b, c, d; cin >> n;
    do ++n, a = (n / 1000) % 10, b = (n / 100) % 10, c = (n / 10) % 10, d = n % 10;
    while(a == b || a == c || a == d || b == c || b == d || c == d);
    cout << n;

    return 0;
}

// https://codeforces.com/problemset/problem/271/A