#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define pi 3.14159265359

int main(void)
{
    u;
    double cir, rad;
    cin >> cir;
    rad = sqrt(cir / pi);
    printf("%.9f",2 * rad * pi);
}