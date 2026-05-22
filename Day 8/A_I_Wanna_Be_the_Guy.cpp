#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int main()
{
    Md_Mehedi_Hasan;
    
    int n; cin >> n;
    set<int> s;
    int p; cin >> p;
    while(p--)
    {
        int x; cin >> x;
        s.insert(x);
    }
    int q; cin >> q;
    while(q--)
    {
        int x; cin >> x;
        s.insert(x);
    }
    cout << (((int)s.size() == n) ? "I become the guy." : "Oh, my keyboard!") << endl;
 
    return 0;
}
 
// https://codeforces.com/problemset/problem/469/A