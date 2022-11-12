#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, cnt = 0; // n: 총개수, cnt: 놓는 방법의 수
int v[16] = {};  // v[행] = 열 -> n x n 체스판의 두는 퀸의 좌표!

bool post (int x) {
    for (int i = 0; i < x; i++) {
        if (v[i] == v[x] || abs(x - i) == abs(v[x] - v[i])) {
            return false;
        }
    }
    return true;
}

void Queen(int x) {
    if (x == n) {
        cnt++;
    }
    else {
        for (int i = 0; i < n; i++) {
            v[x] = i;
            if (post(x)) {
                Queen(x + 1);
            }
        }
    }
}

int main(void)
{
    u;
    cin >> n;
    Queen(0);
    cout << cnt;
}