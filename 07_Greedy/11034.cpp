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
    int a,b,c;
    while (cin >> a >> b >> c){
        cout << max(b-a, c-b) - 1 << '\n';
    }
}