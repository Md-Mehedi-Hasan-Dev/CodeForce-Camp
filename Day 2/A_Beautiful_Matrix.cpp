#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, m, cnt = 0;
    int mat[5][5];
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
            if(mat[i][j] == 1)
            {
                n = i + 1;
                m = j + 1;
            }
        }
    }
    cnt += abs(3 - n);
    cnt += abs(3 - m);
    cout << cnt;

    return 0;
}

// https://codeforces.com/problemset/problem/263/A