#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;



int main(void)
{
    u 
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int c = 0;
        int l = 0;
        int r = s.length() - 1;
        bool f = true;
        for (; l <= r; l++, r--)
        {
            c++;
            if (s[l] != s[r])
            {
                f = false;
                break;
            }
        }
        cout << (f ? 1 : 0) << " " << (f && s.length() % 2 == 0 ? c + 1 : c) << "\n";
    }
}