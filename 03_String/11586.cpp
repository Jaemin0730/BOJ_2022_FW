#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, m;
vector <string> a(100);
char ans[100][100];

int main(void)
{
    u;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    if (m == 1){
        for(int i = 0; i < n; i++)
            cout << a[i] << '\n';
    }
    else if (m == 2){
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                ans[i][j] = a[i][n-1-j];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                cout << ans[i][j];
            cout << '\n';
        }
    }else{
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                ans[i][j] = a[n - 1 - i][j];
        for(int i = 0; i < n; i++)
            cout << ans[i]<<'\n';
    }
}