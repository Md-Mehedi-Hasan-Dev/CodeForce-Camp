#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        int x, power = 1; cin >> x;
        vector<int> v;
        while(x > 0)
        {
            if(x % 10 > 0)
                v.push_back((x % 10) * power);
            x /= 10;
            power *= 10;
        }
        cout << v.size() << endl;
        for(int i : v)
            cout << i << ' ';
        cout << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1352/A