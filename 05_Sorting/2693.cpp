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
    int t;
    cin >> t;
    while (t--) {
        int a[10] = {};
        for (int i=0; i<10; i++) {
            cin >> a[i];
        }
        sort(a, a+10);
        cout << a[7] << "\n";
    }
}