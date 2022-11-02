#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int v[2187][2187];
int sol[3];   // -1 0 1
// 배열에 -1은 없으니까 -1 = 0, 0 = 1, 1 = 2로 생각하자!

void re (int x, int y, int n) {
    int temp = v[x][y];
    int tf = true;
    for (int i = x; i < x + n; i++) {
        for (int j = y; j< y + n; j++) {
            if (v[i][j] != temp) {
            // 기존의 숫자와 달라질때까지 반복문 돌리기
                tf = false;
                break;
            }
        }
    }
    if (tf) {
        sol[temp + 1]++;
    }
    else {
        for (int i = x; i < x + n; i += n/3) {
            for (int j = y; j< y + n; j += n/3) {
                re(i, j, n / 3);
            }
        }
    }
}

int main(void)
{
    u;
    int n;
    // n은 3의 배수!!!
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    re(0, 0, n);
    for (int i = 0; i < 3; i++) {
        cout << sol[i] << "\n";
    }
}