#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 100001
int a[MAX] = {};

int main(void)
{
    u;
    int n, s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int left = 0, right = 0;
    int sum = a[0], len = MAX;
    while (left <= right && right < n) {
        if (sum < s) {
            right++;
            sum += a[right];
        }
        else {
            len = min(len, right - left + 1);   // 길이의 최솟값을 측정하기 위해서!
            sum -= a[left];
            left++;
        }
    }
    if (len > n) {
        len = 0;
    }
    cout << len;
}