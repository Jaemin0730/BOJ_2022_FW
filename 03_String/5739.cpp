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
    while (t--) {
        string s;
        cin >> s;
        int l = s.length();
        if (s[l/2] == s[l/2 - 1]) {
            cout << "Do-it" << "\n";
        }
        else {
            cout << "Do-it-Not" << "\n";
        }
    }
}