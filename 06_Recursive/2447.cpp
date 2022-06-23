#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

void star (int i, int j, int n) {
    if ((i / n) % 3 == 1 && (j / n) % 3 == 1) {
        // 빈칸인 경우는 3으로 나눈 나머지가 1일때!
        cout << " ";
    }
    else if (n / 3 == 0) {
        // 별을 찍는 경우!
        cout << "*";
    }
    else {
        // 위 두 경우에 해당 안되면 분할정복 해줌!!
        star(i, j, n / 3);
    }
}

int main(void)
{
    u;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // 별찍기 재귀 시작
            star(i, j, n);
        }
        cout << "\n";
    }
}