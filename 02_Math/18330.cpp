#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int usePlan, leftLiter, availableLiter;

int main(void)
{
    u;
    cin >> usePlan >> leftLiter;
    availableLiter = 60 + leftLiter;
    if (usePlan <= availableLiter) cout << usePlan * 1500;
    else cout << availableLiter * 1500 + (usePlan - availableLiter) * 3000;
}