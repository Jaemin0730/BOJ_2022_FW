#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int main(void)
{
    u;
    string s;
    cin >> s;
    string num = "";
    int sol = 0;
    bool tf = false;
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == '-' || s[i] == '+' || i == s.length()) {
            if (tf) {
                sol -= stoi(num);
            }
            else {
                sol += stoi(num);
            }
            if (s[i] == '-') {
                tf = true;
            }
            num = "";
        }
        else {
            num += s[i];
        }
    }
    cout << sol;
}