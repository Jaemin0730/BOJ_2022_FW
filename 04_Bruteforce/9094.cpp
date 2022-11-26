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
    int n, m, t, sol;
    cin >> t;
    while(t--){
        sol = 0;
        cin >> n >> m;
        for(int i = 1; i < n; i++){
            for(int j = 1; j < n; j++){
                if (i >= j) continue;
                double r = (double)(i*i + j*j + m) / (i*j);
                if (r == (int)r) sol++;
            }
        }
        cout << sol << '\n';
    }
}