#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

double area;

int main(void)
{
    u;
    cin >> area;
    printf("%.8f", sqrt(area) * 4);
}