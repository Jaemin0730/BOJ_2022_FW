#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int main(void)
{
    u;
    int n, m;
    cin >> n;
    vector<int> ci(n); // 크레인 넣는 배열
    for (int i = 0; i < n; i++) {
        cin >> ci[i];
    }
    cin >> m;
    vector<int> bx(m); // 박스 넣는 배열
    for (int i = 0; i < m; i++) {
        cin >> bx[i];
    }
    sort(ci.begin(), ci.end(), greater<int>());
    sort(bx.begin(), bx.end(), greater<int>());
    int sol = 0;    // 몇초 걸리는지!
    if (bx[0] > ci[0]) {
        cout << -1;
        return 0;
    }
    while (!bx.empty()) {
        sol++;
        for (int i = 0; i < ci.size(); i++) {
            for (int j = 0; j < bx.size(); j++) {
                if (ci[i] >= bx[j]) {
                    //cout << bx[j] << "!\n";
                    bx.erase(bx.begin() + j);
                    break;
                }
            }
            //cout << "??\n";
        }
        //cout << "%%\n";
    }
    cout << sol;
    return 0;
}