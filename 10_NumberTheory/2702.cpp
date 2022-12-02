#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int gcd(int a, int b) {
    int r;
    while (b!=0){
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main(void)
{
    u
    int n, a, b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        cout << (a*b) / gcd(a, b) << " ";
        cout << gcd(a, b) << "\n";
    }
}