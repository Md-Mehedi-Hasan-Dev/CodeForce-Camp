#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, m, f = 0; cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
            for(int j = 0; j < m; j++)
                cout << '#';
        else
        {
            if(f == 1)
                cout << '#';
            for(int j = 0; j < m - 1; j++)
                cout << '.';
            if(f == 0)
                cout << '#';
            (f == 0) ? f = 1 : f = 0;
        }
        cout << endl;
    }
    

    return 0;
}

// https://codeforces.com/problemset/problem/510/A