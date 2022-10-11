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
    int t1, v1, t2, v2;
    cin >> t1 >> v1 >> t2 >> v2;
    if (t2 < 0 && v2 >= 10) { 
        cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
        return 0;
    }
    if (t1 > t2) {
        cout << "MCHS warns! Low temperature is expected tomorrow."; 
        return 0;
    }
    if (v1 < v2) {
        cout << "MCHS warns! Strong wind is expected tomorrow."; 
        return 0;
    }
    cout << "No message";
}