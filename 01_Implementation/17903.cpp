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
    int n, m, query[21][21];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> query[i][j];
    if (n >= 8) {
        cout << "satisfactory";
    }
    else {
        cout << "unsatisfactory";
    }
}