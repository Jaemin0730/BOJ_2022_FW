#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;



int main(void)
{
    u
    int n, m, cnt = 0;
    cin >> n >> m;
    int a[n+1] = {};
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        int temp = 0;
        for (int j=i; j<n; j++) {
            temp += a[j];
            if (temp == m) {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
}