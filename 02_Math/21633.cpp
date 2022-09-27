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
    double k, sol;
    cin >> k;
    sol = 25.0 + k * 0.01;
    if (sol <= 100) {
        printf("100.00");
    }
    else if (sol >= 2000) {
        printf("2000.00");
    }
    else {
        printf("%.2f", sol);
    }
}