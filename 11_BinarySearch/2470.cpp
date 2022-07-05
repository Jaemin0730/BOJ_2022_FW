#include <bits/stdc++.h>
using namespace std;
#define u cin.tie(0)->sync_with_stdio(0)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef pair<int,int> pii;

vector<int> v;

int main(void)
{
    u;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.pb(num);
    }
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;         // 투포인터에서 좌 = l, 우 = r
    int sum = 0, ll = 0, rr = 0;  // ll은 v에서 l의 값, rr은 v에서 r의 값!
    int sol = 2000000001;         // sol은 0에 가장 가까운 값의 합!
    // 투포인터 개념 사용!!
    while (l < r) {
        sum = v[l] + v[r];
        if (sol > abs(sum)) {
            sol = abs(sum);
            ll = v[l];
            rr = v[r];
            if (sum == 0) {
                break;
            }
        }
        if (sum < 0) {
            l++;
        }
        else {
            r--;
        }
    }
    cout << ll << " " << rr;
}