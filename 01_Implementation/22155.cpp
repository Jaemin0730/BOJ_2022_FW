#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, i, f;

int main(void)
{
    u;
    cin >> n;
    while(n--){
        cin >> i >> f;
        if((i <= 1 && f <= 2) || (i <= 2 && f <= 1)) {
            cout << "Yes\n";
        }         
        else {
            cout << "No\n";
        }            
    }
}