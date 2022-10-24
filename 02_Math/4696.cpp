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
    double a;
    while(1){
        cin >> a;
        if (a == 0) break;
        printf("%.2f\n", 1 + a + pow(a,2) + pow(a,3) + pow(a,4));
    }
}