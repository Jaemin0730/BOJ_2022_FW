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
    s += " ";
    int cnt = 0;
    string sol = "";
    bool b = true;
    for (int i = 0; i < s.length() - 1; i++) {  // cnt 2인 경우 고려해서!
        if (s[i] == 'X')
        {
            cnt++;
        }
        if (s[i] == '.') {
            sol += ".";
            if (cnt % 2 != 0) { // 개수가 홀수일 경우 -> -1 출력해주기
                break;
            }
            else {
                cnt = 0;        // 카운트 초기화!
            }
        }
        if (cnt == 4) {
            sol += "AAAA";
            cnt = 0;            // 카운트 초기화 꼭해주기
        }
        else if (cnt == 2 && s[i + 1] != 'X') {
            sol += "BB";
            cnt = 0;            // 카운트 초기화 꼭해주기
        }
    }
    if (cnt % 2 == 1) {
        cout << "-1";
    }
    else {
        cout << sol;
    }
}