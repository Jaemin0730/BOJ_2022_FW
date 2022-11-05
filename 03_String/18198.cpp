#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

string s;
int a, b;

int main(void)
{
    u;
    cin >> s;
    for (int i = 0; i < s.size(); i+=2){
        if (s[i] == 'A') a += s[i+1] - '0';
        else b += s[i+1] - '0';
    }
    if (a > b) cout << "A";
    else cout << "B";
}