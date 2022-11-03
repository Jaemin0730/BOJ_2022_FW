#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int v[128][128];
int a = 0, b = 0;
// a : blue(1), b: white(0)

void re (int x, int y, int n) {
    int temp = v[x][y];
    int blue = true, white = true;
    for (int i = x; i < x + n; i++) {
        for (int j = y; j < y + n; j++) {
            if (v[i][j] == 1) {
                white = false;
            }
            else {
                blue = false;
            }
        }
    }
    if (blue) {
        a++;
        return;
    }
    if (white) {
        b++;
        return;
    }
    re(x, y, n / 2);                    
    re(x, y + n / 2, n / 2);            
    re(x + n / 2, y, n / 2);
    re(x + n / 2, y + n / 2, n / 2);
}

int main(void)
{
    u;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    re(0, 0, n);
    cout << b << "\n" << a;
}