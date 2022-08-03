#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n,c;
vector<int> v;

int main(void)
{
    u;
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.pb(num);
    }
    sort(v.begin(), v.end());
    int left = 0, right = v[n - 1];
    int sol, k, cnt; // cnt: 공유기의 개수, k: 공유기 위치 임시 저장
    while (left <= right) {
        int mid = (left + right) / 2;
        k = 0;
        cnt = 1;
        for (int i = 1; i < n; i++) {
            if (v[i] - v[k] >= mid) {
                k = i;
                cnt++;
            }
        }
        if (cnt >= c) {
            sol = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    cout << sol;
}