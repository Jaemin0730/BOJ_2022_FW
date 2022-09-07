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
double t;

int main(void)
{
    u;
    cin >> t;
    printf("%.10f", sqrt(t / pi) * 2 * pi);
}