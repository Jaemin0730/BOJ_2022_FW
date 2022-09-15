#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll arr[5001] = {};
ll a, b, c;
ll toobig = 3e9;        // 합의 절댓값을 비교해주는 값들을 넣어주는 곳

int main(void)
{
    u;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // 정렬해주기
    sort(arr, arr + n);
    // 0 ~ n-3까지 하나의 값을 잡고 이분탐색 해주자!
    for (int i = 0; i < n - 2; i++) {
        int l = i + 1;
        int r = n - 1;
        while (l < r) {
            ll sum = arr[i] + arr[l] + arr[r];
            // 합의 절댓값이 작은값 -> 최소값임!!
            if (abs(sum) < toobig) {
                toobig = abs(sum);
                a = arr[i];
                b = arr[l];
                c = arr[r];
            }
            if (sum < 0) {
                l++;
            }
            else {
                r--;
            }
        }
    }
    cout << a << " " << b << " " << c;
}