#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    string s1, s2, s3; cin >> s1 >> s2 >> s3;
    vector<int> v(26, 0), v1(26, 0);
    int flag = 1;
    for(char c : s1 + s2)
        v[c - 'A']++;
    for(char c : s3)
        v1[c - 'A']++;
    for(int i = 0; i < 26; i++)
        if(v[i] != v1[i])
            flag = 0;
    if(flag) cout << "YES";
    else cout << "NO";

    return 0;
}

// https://codeforces.com/problemset/problem/141/A

/*
==== Another Way to solve ====
    
    vector<int> cnt(26, 0);

    for (char c : s1 + s2)
        cnt[c - 'A']++;

    for (char c : s3)
        cnt[c - 'A']--;

    for (int x : cnt)
    {
        if (x != 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
*/