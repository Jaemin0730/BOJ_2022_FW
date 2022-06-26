#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define pb push_back

int main(void)
{
    u;
    int a[50];
    int n, m;
    cin >> n >> m;
    int mn = 0, sol = 0; // 음수인 수의 개수(minusnumber), 최소 길이의 수!!
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            mn++;
        }
    }
    sort(a, a + n); // 내림차순으로 해도 괜찮음~~
    // m의 개수로 묶어주니까 i+=,-=m으로 반복문 돌려주장ㅎㅎ
    // 음수부터 길이 더해주자!
    for (int i = 0; i < mn; i += m) {
        sol += abs(a[i]) * 2;
    }
    // 양수의 길이 더해주자!
    for (int i = n - 1; i >= mn; i -= m) {
        // 큰 수부터 2개씩 묶어줘야되니까 n-1부터 시작해줌
        sol += a[i] * 2;
    }
    // 가장 마지막에는 다시 올 필요가 X -> 가장 큰값은 빼줘야돼
    // 근데 이때 큰값이 양수, 음수 중 어디에 있는지 모름 ㅠㅠ
    sol -= max(abs(a[0]), a[n - 1]);
    cout << sol;
}