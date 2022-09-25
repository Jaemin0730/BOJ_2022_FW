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
    int a[3];
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort(a, a + 3);
    if (a[0] == a[1] || a[1] == a[2] || a[0] + a[1] == a[2]) {
        cout << "S";
    }
    else {
        cout << "N";
    }
}