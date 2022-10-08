#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int t, n0, n1, n2, n3, n4;

int main(void)
{
    u;
    while(1){
        t++;
        string s = "odd";
        cin >> n0;
        if (!n0) break;
        n1 = n0 * 3;
        if (n1 % 2 == 0) s = "even", n2 = n1/2;
        else n2 = (n1+1)/2;
        n3 = 3 * n2;
        n4 = n3 / 9;
        cout << t << ". " << s << ' ' << n4 << '\n';
    }
}