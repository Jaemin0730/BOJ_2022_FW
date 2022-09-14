#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

double w,h,dc,rct;

int main(void)
{
    u;
    cin >> w >> h;
    rct = w + h;
    dc = sqrt(w * w + h * h);
    printf("%.9f", rct - dc);
}