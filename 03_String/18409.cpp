#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

string s, v = "aeiou";
int n, ans;

bool hasVowel(char c) {
    for(auto i : v)
        if(i == c)
        return true;
    return false;
}

int main(void)
{
    u;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if(hasVowel(s[i])) 
            ans++;
    }
    cout << ans;
}