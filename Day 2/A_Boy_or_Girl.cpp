#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    string s; cin >> s;
    set<char> st;
    for(char c : s)
        st.emplace(c);
    if(st.size() & 1 == 1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

    return 0;
}

// https://codeforces.com/problemset/problem/236/A