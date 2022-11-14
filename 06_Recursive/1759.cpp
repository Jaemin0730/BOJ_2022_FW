#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int L, C;
string s = "";
bool tf[16] = {};
//https://gusdnr69.tistory.com/203
void Search (int cnt, int x) {  // cnt: 개수, x: 현재 인덱스
    if (cnt == L) {
        int J = 0, M = 0; // J:자음, M:모음
        for (int i = 0; i < s.size(); i++) {
            if (tf[i]) {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                    M++;
                }
                else {
                    J++;
                }
            }
        }
        if (J >= 2&& M >= 1) {
            for (int i = 0; i < s.size(); i++) {
                if (tf[i]) {
                    cout << s[i];
                }
            }
            cout << "\n";
        }
    }

    for (int i = x; i < s.size(); i++) {
        if (!tf[i]) {
            tf[i] = true;
            Search(cnt + 1, i);
            tf[i] = false;
        }
    }
}

int main(void)
{
    u;
    cin >> L >> C;
    for(int i = 0; i < C; i++) {
        char c;
        cin >> c;
        s += c;
    }
    sort(s.begin(), s.end());
    Search(0, 0);
}