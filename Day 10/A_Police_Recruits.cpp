#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n; cin >> n;
    int police = 0, crime = 0;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x == -1)
        {
            if(police > 0) police--;
            else crime++;
            /* Works same as above
            if(!police) crime++;
            else police--;
            */
        }
        else
            police += x;
    }
    cout << crime;

    return 0;
}

// https://codeforces.com/problemset/problem/427/A