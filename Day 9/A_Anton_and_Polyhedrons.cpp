#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, cnt = 0; cin >> n;
    while(n--)
    {
        string s; cin >> s;
        if(s == "Tetrahedron")
            cnt += 4;
        else if(s == "Cube")
            cnt += 6;
        else if(s == "Octahedron")
            cnt += 8;
        else if(s == "Dodecahedron")
            cnt += 12;
        else
            cnt += 20;
    }
    cout << cnt;

    return 0;
}

// https://codeforces.com/problemset/problem/785/A